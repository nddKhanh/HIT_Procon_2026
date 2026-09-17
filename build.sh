#!/bin/bash
CXX=g++
CXXFLAGS="-std=c++17 -IHexaUdon/include -IHexaUdon/third_party"
CORE_SRC="HexaUdon/src/io/JsonReader.cpp HexaUdon/src/io/JsonWriter.cpp HexaUdon/src/io/DiaryWriter.cpp HexaUdon/src/map/Map.cpp HexaUdon/src/solver/ActionValidator.cpp HexaUdon/src/solver/PathFinder.cpp HexaUdon/src/solver/SpotScorer.cpp HexaUdon/src/solver/PatrolPlanner.cpp HexaUdon/src/solver/SupplyPlanner.cpp HexaUdon/src/solver/MoveSimulator.cpp HexaUdon/src/solver/Solver.cpp HexaUdon/src/api/GameApiClient.cpp HexaUdon/src/api/HttpClient.cpp"
LDFLAGS="-lwininet"

if [ "$1" == "test" ]; then
    echo "[BUILDING & RUNNING UNIT TESTS]..."
    $CXX $CXXFLAGS HexaUdon/tests/test_all.cpp $CORE_SRC $LDFLAGS -o test_all
    if [ $? -eq 0 ]; then
        ./test_all
    fi
elif [ "$1" == "clean" ]; then
    echo "[CLEANING EXECUTABLES]..."
    rm -f HexaUdon test_all HexaUdon.exe test_all.exe
    echo "Done!"
else
    echo "[BUILDING MAIN EXECUTABLE] HexaUdon..."
    $CXX $CXXFLAGS HexaUdon/src/main.cpp $CORE_SRC $LDFLAGS -o HexaUdon
    if [ $? -eq 0 ]; then
        echo "[SUCCESS] HexaUdon created successfully!"
    fi
fi
