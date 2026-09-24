@echo off
chcp 65001 >nul
setlocal enabledelayedexpansion

set CXX=g++
set CXXFLAGS=-std=c++17 -O2 -IHexaUdon/include -IHexaUdon/third_party
set CORE_SRC=HexaUdon/src/io/JsonReader.cpp HexaUdon/src/io/JsonWriter.cpp HexaUdon/src/io/DiaryWriter.cpp HexaUdon/src/map/Map.cpp HexaUdon/src/solver/ActionValidator.cpp HexaUdon/src/solver/PathFinder.cpp HexaUdon/src/solver/SpotScorer.cpp HexaUdon/src/solver/PatrolPlanner.cpp HexaUdon/src/solver/SupplyPlanner.cpp HexaUdon/src/solver/MoveSimulator.cpp HexaUdon/src/solver/Solver.cpp HexaUdon/src/api/GameApiClient.cpp HexaUdon/src/api/HttpClient.cpp
set LDFLAGS=-lwininet
set APP_EXE=HexaUdon\HexaUdon.exe
set TEMP_DIR=HexaUdon\.build

if not exist "%TEMP_DIR%" mkdir "%TEMP_DIR%"

if "%1"=="test" goto run_tests

if "%1"=="benchmark" (
    set TEMP_EXE=%TEMP_DIR%\benchmark.exe
    %CXX% %CXXFLAGS% HexaUdon/tests/benchmark.cpp %CORE_SRC% %LDFLAGS% -o !TEMP_EXE!
    if !errorlevel! neq 0 exit /b !errorlevel!
    set BENCHMARK_ARGS=
    if "%2"=="--formation" set BENCHMARK_ARGS=--formation
    if "%2"=="--check" set BENCHMARK_ARGS=--check
    !TEMP_EXE! !BENCHMARK_ARGS!
    set RESULT=!errorlevel!
    del /q !TEMP_EXE! 2>nul
    exit /b !RESULT!
)

if "%1"=="runner" (
    echo [DANG BIEN DICH VA CHAY AGENT DEBUGGER RUNNER]...
    set TEMP_EXE=%TEMP_DIR%\test_runner.exe
    %CXX% %CXXFLAGS% HexaUdon/tests/test_runner.cpp %CORE_SRC% %LDFLAGS% -o !TEMP_EXE!
    if !errorlevel! equ 0 (
        type HexaUdon\demo_input.json | !TEMP_EXE!
        set RESULT=!errorlevel!
        del /q !TEMP_EXE! 2>nul
        exit /b !RESULT!
    ) else (
        echo [LOI] Bien dich that bai!
        exit /b 1
    )
)

if "%1"=="clean" (
    echo [DANG DON DEP CAC FILE EXECUTABLE]...
    if exist HexaUdon.exe del /q HexaUdon.exe
    if exist benchmark.exe del /q benchmark.exe
    if exist test_all.exe del /q test_all.exe
    if exist test_runner.exe del /q test_runner.exe
    if exist "%APP_EXE%" del /q "%APP_EXE%"
    if exist "%TEMP_DIR%\*.exe" del /q "%TEMP_DIR%\*.exe"
    echo Hoan tat!
    goto end
)

goto main_build

:run_tests
echo [DANG BIEN DICH VA CHAY UNIT TESTS]...
set TEMP_EXE=%TEMP_DIR%\test_all.exe
set TEST_LOG=%TEMP_DIR%\test_all.log
%CXX% %CXXFLAGS% HexaUdon/tests/test_all.cpp %CORE_SRC% %LDFLAGS% -o %TEMP_EXE%
if errorlevel 1 goto tests_failed
echo [DANG CHAY CAC BAI TEST]:
%TEMP_EXE% > %TEST_LOG% 2>&1
type %TEST_LOG%
findstr /c:"All unit tests completed successfully!" %TEST_LOG% >nul
if errorlevel 1 goto tests_failed
del /q %TEMP_EXE% 2>nul
del /q %TEST_LOG% 2>nul
endlocal & exit /b 0

:tests_failed
echo [LOI] Unit test khong hoan tat!
del /q %TEMP_EXE% 2>nul
del /q %TEST_LOG% 2>nul
endlocal & exit /b 1

:main_build
if exist HexaUdon.exe del /q HexaUdon.exe
if exist benchmark.exe del /q benchmark.exe
if exist test_all.exe del /q test_all.exe
if exist test_runner.exe del /q test_runner.exe
if exist "%TEMP_DIR%\*.exe" del /q "%TEMP_DIR%\*.exe"
echo [DANG BIEN DICH CHUONG TRINH CHINH] %APP_EXE%...
%CXX% %CXXFLAGS% HexaUdon/src/main.cpp %CORE_SRC% %LDFLAGS% -o "%APP_EXE%"
if !errorlevel! equ 0 (
    echo [THANH CONG] Da tao duy nhat file %APP_EXE%!
) else (
    echo [LOI] Bien dich that bai!
)

:end
