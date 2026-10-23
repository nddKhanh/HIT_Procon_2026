"""Local HTTP checks; never contacts the competition server.

python HexaUdon/tests/test_runtime_api.py HexaUdon/HexaUdon.exe
"""
import json
import os
from pathlib import Path
import subprocess
import sys
import tempfile
import threading
import time
from http.server import BaseHTTPRequestHandler, ThreadingHTTPServer


def check(executable, mode):
    config = {
        "startsAt": 0, "daySeconds": [60, 60], "daySteps": [1, 1],
        "map": {"height": 1, "width": 1, "cells": [[0]]},
        "spots": [{"brand": 7, "pos": 0, "stocks": 1}], "agents": [0],
        "fuelLimits": 10, "players": 7, "busyThreshold": 5, "jammedThreshold": 10,
    }
    if mode == "missing_players":
        del config["players"]
    selected = mode not in ("selection", "selection_race")
    answers, selection_posts = [], []
    status_calls = 0
    ends_at = int(time.time()) + 60
    second_run = False

    class Handler(BaseHTTPRequestHandler):
        def log_message(self, *args):
            pass

        def reply(self, body, status=200):
            raw = body if isinstance(body, bytes) else json.dumps(body).encode()
            self.send_response(status)
            self.send_header("Content-Type", "application/json")
            self.send_header("Content-Length", str(len(raw)))
            self.end_headers()
            self.wfile.write(raw)

        def do_GET(self):
            nonlocal status_calls
            if self.path.endswith("/config"):
                self.reply(config)
                return
            assert self.path.endswith("/status"), self.path
            status_calls += 1
            if mode == "auth":
                self.reply({"error": "unauthorized"}, 401)
                return
            day = 0
            finished = bool(answers)
            if mode == "finished":
                finished = True
            if mode == "near_deadline":
                finished = status_calls >= 4
            if mode in ("retry", "invalid", "missing_valid"):
                finished = len(answers) >= 2 if mode == "retry" else bool(answers)
            if mode == "changed_day" and answers:
                day = 1
                finished = status_calls >= 5
            if mode == "resume" and second_run:
                finished = status_calls >= 3
            server_selected = selected or (mode == "selection_race" and status_calls >= 2)
            self.reply({"startsAt": ends_at - 60,
                        "day": day if server_selected else -1, "currentDay": day,
                        "totalDays": 2,
                        "endsAt": (ends_at - 55 if mode == "near_deadline" else ends_at) if server_selected else 0,
                        "agents": [{"kind": 0, "pos": 0, "fuel": 10}] if server_selected else [],
                        "others": [], "traffics": [], "finished": finished})

        def do_POST(self):
            nonlocal selected
            raw = self.rfile.read(int(self.headers["Content-Length"]))
            if self.path.endswith("/agents"):
                selection_posts.append(json.loads(raw))
                selected = True
                self.reply({"ok": True})
                return
            assert self.path.endswith("/answer"), self.path
            answers.append(raw)
            if mode in ("retry", "changed_day") and len(answers) == 1:
                # Explicit 503 models an ambiguous server failure without relying
                # on transport-library connection retry behavior.
                self.reply({"error": "response lost upstream"}, 503)
            elif mode == "invalid":
                self.reply({"valid": False, "error": "rejected"})
            elif mode == "missing_valid":
                self.reply({"ok": True})
            elif mode == "malformed":
                self.reply(b"<html>not an answer acknowledgement</html>")
            else:
                self.reply({"valid": True, "revision": len(answers)})

    server = ThreadingHTTPServer(("127.0.0.1", 0), Handler)
    worker = threading.Thread(target=server.serve_forever, daemon=True)
    worker.start()
    try:
        with tempfile.TemporaryDirectory(prefix="hexudon-api-test-") as directory:
            env = dict(os.environ, HEXUDON_AGENT_SELECTION_SECONDS="10")
            command = [str(executable), "--server", f"http://127.0.0.1:{server.server_port}",
                       "--token", "local-test-only", "--match", "test"]

            def run():
                result = subprocess.run(command, cwd=directory, env=env,
                                        stdout=subprocess.PIPE, stderr=subprocess.STDOUT, timeout=20)
                output = result.stdout.decode("utf-8", errors="replace")
                assert result.returncode == (1 if mode in ("auth", "missing_players") else 0), output
                return output

            output = run()
            assert len(selection_posts) == (1 if mode == "selection" else 0), output
            assert len(answers) == (0 if mode in ("auth", "missing_players", "finished", "near_deadline") else
                                    2 if mode == "retry" else 1), output
            if mode == "retry":
                assert answers[0] == answers[1], output
            checkpoints = list((Path(directory) / ".runtime").glob("*.json"))
            if mode in ("invalid", "missing_valid", "malformed", "changed_day", "auth",
                        "missing_players", "finished", "near_deadline"):
                assert not checkpoints, output
            elif mode == "resume":
                assert len(checkpoints) == 1, output
                assert json.loads(checkpoints[0].read_text())["brands"] == [7], output
                second_run = True
                status_calls = 0
                output = run()
                assert "[RESUME]" in output and len(answers) == 1, output
            print(f"[PASS] Local API: {mode}")
    finally:
        server.shutdown()
        server.server_close()
        worker.join()


if __name__ == "__main__":
    executable = Path(sys.argv[1]).resolve()
    for scenario in ("selection", "selection_race", "resume", "retry", "changed_day", "invalid",
                     "missing_valid", "malformed", "auth", "missing_players", "finished", "near_deadline"):
        check(executable, scenario)
