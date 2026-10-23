"""Replay historical fleets; never connects to the match server."""
import argparse
import hashlib
import json
from pathlib import Path
import subprocess

parser = argparse.ArgumentParser()
parser.add_argument('--binary', type=Path, required=True)
parser.add_argument('--fixtures', type=Path, required=True)
parser.add_argument('--output', type=Path, required=True)
parser.add_argument('--only', nargs='*')
args = parser.parse_args()
cases = [
    ('V0', 'V0 (1).json', '00001', None, 42000),
    ('C1', 'C1 (1).json', '00001', None, 42000),
    ('C2', 'C2 (1).json', '0001', None, 37000),
    ('C3', 'C3 (1).json', '00001', None, 47000),
    ('F1', 'F1 (1).json', '00001', None, 47000),
    ('F2', 'F2 (1).json', '0010010', None, 57000),
    ('F3', 'F3 (1).json', '10000', None, 42000),
    ('sample16', 'sample_16.json', '0010', [12,58,0], 57000),
    ('sample24', 'sample_24.json', '00100', [18,90,118], 57000),
    ('sample32', 'sample_32.json', '0000011', [24,119,161], 57000),
]
args.output.parent.mkdir(parents=True, exist_ok=True)
report = {'traffic': 'own-dynamic', 'formation': 'historical fixed fleet', 'cases': {}}
for name, filename, types, minimum, budget in cases:
    if args.only and name not in args.only:
        continue
    fixture = args.fixtures / filename
    data = json.loads(fixture.read_text(encoding='utf-8-sig'))
    if not name.startswith('sample'):
        brands = len({spot['brand'] for spot in data['spots']})
        minimum = [brands, brands * len(data['daySteps']), 0]
    command = [str(args.binary.resolve()), '--sample', str(fixture.resolve()),
               '--types', types, '--own-traffic', '--live-budget-ms', str(budget),
               '--at-least', *map(str, minimum)]
    try:
        log = args.output.with_name(args.output.stem + '-' + name + '.log')
        with log.open('w', encoding='utf-8') as stderr:
            result = subprocess.run(command, stdout=subprocess.PIPE, stderr=stderr, text=True,
                                    timeout=(len(data['daySteps']) + 1) * 65)
        score = json.loads(result.stdout) if result.stdout.strip() else None
        record = {'minimum': minimum, 'returncode': result.returncode,
                  'fixtureSha256': hashlib.sha256(fixture.read_bytes()).hexdigest(),
                  'result': score}
        print(name, 'PASS' if result.returncode == 0 else 'FAIL',
              score['score'] if score else 'no score', flush=True)
    except subprocess.TimeoutExpired:
        record = {'minimum': minimum, 'returncode': -1, 'error': 'match timeout'}
        print(name, 'TIMEOUT', flush=True)
    report['cases'][name] = record
    args.output.write_text(json.dumps(report, indent=2) + '\n', encoding='utf-8')
raise SystemExit(0 if report['cases'] and
                 all(c['returncode'] == 0 for c in report['cases'].values()) else 1)
