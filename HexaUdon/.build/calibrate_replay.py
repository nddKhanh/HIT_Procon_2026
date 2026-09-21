import json
from collections import Counter
from pathlib import Path

data = json.loads(Path('HexaUdon/tests/replay_5cc3b9ea.json').read_text())
config = data['config']
width = config['map']['width']
flat = sum(config['map']['cells'], [])
limit = config['fuelLimits']
spotat = {s['pos']: i for i, s in enumerate(config['spots'])}

def neighbor(p, d):
    x, y = p % width, p // width
    dx = ([0, 1, 1, 1, 0, -1] if y % 2 == 0 else [-1, 0, 1, 0, -1, -1])[d]
    return (y + [-1, -1, 0, 1, 1, 0][d]) * width + x + dx

def timeline(start, actions, traffic, steps):
    pos = [start]
    moving = []
    begins = []
    costs = []
    endcosts = []
    p = start
    for act in actions:
        cost = 0
        if act < 0:
            duration, dest = -act, p
        else:
            kind = flat[p]
            duration = 2 if kind == 0 else 3 if kind == 2 else [1, 2, 4][traffic.get(p, 0)]
            cost = 1 if kind == 0 else 2
            dest = neighbor(p, act)
        for t in range(duration):
            moving.append(act >= 0)
            begins.append(t == 0)
            costs.append(cost if t == 0 else 0)
            endcosts.append(cost if t == duration - 1 else 0)
            pos.append(dest if t == duration - 1 else p)
        p = dest
    assert len(pos) == steps + 1, (len(pos), steps)
    return {'pos': pos, 'moving': moving, 'begins': begins, 'costs': costs, 'endcosts': endcosts}

cases = []
for team in data['teams']:
    agents = [[p, limit] for p in config['agents']]
    for day, expected in enumerate(team['days']):
        steps = config['daySteps'][day]
        traffic = dict(data['traffic'][day])
        lines = [timeline(a[0], acts, traffic, steps) for a, acts in zip(agents, expected['actions'])]
        assert [l['pos'][-1] for l in lines] == [a[0] for a in expected['agents']]
        cases.append((team['name'], day, team['kinds'], agents, expected, lines, steps))
        agents = expected['agents']

def collections(case, mode):
    name, day, kinds, agents, expected, lines, steps = case
    stock = [s['stocks'] for s in config['spots']]
    seen = [set() for _ in kinds]
    got = []
    times = range(steps + 1) if mode in ('boundaries', 'stationary_boundaries') else range(steps)
    for t in times:
        for i, kind in enumerate(kinds):
            if kind != 0:
                continue
            if mode == 'stationary' and lines[i]['moving'][t]:
                continue
            if mode == 'stationary_boundaries' and t < steps and lines[i]['moving'][t] and not lines[i]['begins'][t]:
                continue
            si = spotat.get(lines[i]['pos'][t])
            if si is not None and si not in seen[i] and stock[si]:
                stock[si] -= 1
                seen[i].add(si)
                got.append([i, config['spots'][si]['brand']])
    return got, stock

def allowed(line, t, mode):
    if mode == 'all': return True
    if mode == 'wait': return not line['moving'][t]
    if mode == 'start': return not line['moving'][t] or line['begins'][t]
    if mode == 'continue': return line['moving'][t] and not line['begins'][t]
    raise ValueError(mode)

def fuels(case, pmode, smode, event, charge, order):
    name, day, kinds, agents, expected, lines, steps = case
    fuel = [a[1] for a in agents]
    def debit(t):
        for i, kind in enumerate(kinds):
            if kind == 0: fuel[i] -= lines[i][charge][t]
    def refuel(t):
        for i, kind in enumerate(kinds):
            if kind == 0 and allowed(lines[i], t, pmode):
                for j, supplykind in enumerate(kinds):
                    if supplykind == 1 and allowed(lines[j], t, smode):
                        if lines[i]['pos'][t + event] == lines[j]['pos'][t + event]:
                            fuel[i] = limit
                            break
    for t in range(steps):
        if order == 'before': refuel(t); debit(t)
        else: debit(t); refuel(t)
    return fuel

if __name__ == '__main__':
    for mode in ['boundaries', 'stepstart', 'stationary', 'stationary_boundaries']:
        mismatches = []
        for case in cases:
            got, stock = collections(case, mode)
            exp = case[4]
            if got != exp['collections'] or stock != exp['stock']:
                mismatches.append((case[0],case[1],len(got),len(exp['collections']), len(list((Counter(map(tuple,got))-Counter(map(tuple,exp['collections']))).elements())), len(list((Counter(map(tuple,exp['collections']))-Counter(map(tuple,got))).elements()))))
        print('COLLECTION', mode, mismatches)
    rankings=[]
    for pm in ['all','wait','start','continue']:
        for sm in ['all','wait','start','continue']:
            for event in [0,1]:
                for charge in ['costs','endcosts']:
                    for order in ['before','after']:
                        mismatches = []
                        for case in cases:
                            got=fuels(case,pm,sm,event,charge,order)
                            want=[a[1] for a in case[4]['agents']]
                            mismatches += [(case[0], case[1],i,g,w) for i,(g,w) in enumerate(zip(got,want)) if g != w]
                        rankings.append((len(mismatches),(pm,sm,event,charge,order),mismatches))
    for r in sorted(rankings)[:15]: print('FUEL',r)
    for case in cases:
        name, day, kinds, agents, expected, lines, steps = case
        fuel = [a[1] for a in agents]
        for t in range(steps):
            for i, kind in enumerate(kinds):
                if kind == 0:
                    if lines[i]['costs'][t] > fuel[i]: print('LOW AT DEPARTURE', name,day+1,i,t,fuel[i],lines[i]['costs'][t])
                    fuel[i] -= lines[i]['endcosts'][t]
                    if fuel[i] < 0: print('NEGATIVE BEFORE REFUEL',name,day+1,i,t+1,fuel[i])
            for i, kind in enumerate(kinds):
                if kind != 0 or fuel[i] == limit: continue
                for j, supplykind in enumerate(kinds):
                    if supplykind == 1 and lines[i]['pos'][t+1] == lines[j]['pos'][t+1]:
                        print('REFUEL',name,day+1,'step',t+1,'patrol',i,'supply',j,'fuel',fuel[i],'->',limit,'patrol_moving',lines[i]['moving'][t], 'supply_moving',lines[j]['moving'][t])
                        fuel[i] = limit
                        break
