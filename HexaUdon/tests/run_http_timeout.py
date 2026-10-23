"""Run from HexaUdon after building .build/http_connection_tests.exe."""
import http.server
import subprocess
import threading
import time
class SlowHandler(http.server.BaseHTTPRequestHandler):
    def do_GET(self):
        time.sleep(8)
    def log_message(self, *args):
        pass
server = http.server.ThreadingHTTPServer(("127.0.0.1", 0), SlowHandler)
threading.Thread(target=server.serve_forever, daemon=True).start()
try:
    started = time.monotonic()
    result = subprocess.run([".build/http_connection_tests.exe",
        f"http://127.0.0.1:{server.server_port}"], capture_output=True, text=True, timeout=12)
    elapsed = time.monotonic() - started
    assert result.returncode == 1 and "12002" in result.stdout and elapsed < 7, (elapsed, result.stdout)
    print(f"[PASS] Slow server timed out in {elapsed:.2f}s")
finally:
    server.shutdown()
