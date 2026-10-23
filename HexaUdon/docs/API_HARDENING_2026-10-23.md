# API hardening on Quan

The solver and formation algorithms are unchanged. Endpoints, x-api-token header and action arrays remain compatible with the existing API.

- Windows now validates HTTPS certificates normally.
- Connect/send/receive timeouts use the remaining request budget. Default request budget is 5 seconds. Before submission, the final GET gets half of the remaining day budget; POST gets the day deadline. Synchronous WinINet phase timeouts are not a guarantee of hard cancellation exactly at the deadline under all network/OS conditions.
- Both submissions require a JSON object with boolean `valid: true`. Missing/malformed acknowledgements never commit the plan or write a successful diary.
- Maximum 3 answer attempts per day/start/end window, with increasing waits. Only explicit HTTP 429/502/503/504 failures are retried. Validation errors and ambiguous transport/acknowledgement failures stop automatic attempts for that window. Check server results in ambiguous cases; the answer might already have been accepted.
- Waiting status polling is now 750 ms. Adjust if BTC publishes a different request limit.
- Essential config fields, dimensions, positions and positive day/fuel values are validated before planning. Both fuelLimits/fuelLimit aliases remain supported. daySeconds remains optional.
- Previously added pre-start archival after an authorized same-ID server reset remains unchanged.

Validation: mocked API tests passed for valid/invalid/missing acknowledgements, transient HTTP failures, mandatory config fields, fuel alias and bounds. Slow local server returned timeout in about 4 seconds. A read-only live HTTPS probe reached the configured server and received HTTP 401. This confirms TLS connectivity without bypassing certificate validation, but the current credentials/access were not accepted. An authenticated live config/status and a real match are not yet verified. No live POST was sent.

Build the API regression test with GameApiClient.cpp and the fake HttpClient in tests/test_api_safety.cpp (do not link HttpClient.cpp). Build tests/test_http_connection.cpp with both API source files and -lwininet. Run tests/run_http_timeout.py from HexaUdon after building .build/http_connection_tests.exe.
