cmake_minimum_required(VERSION 3.10)
project(HexaUdon CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${CMAKE_CURRENT_SOURCE_DIR}/third_party
)

# Collect core source files (excluding main.cpp)
file(GLOB_RECURSE CORE_SOURCES
    "src/api/*.cpp"
    "src/io/*.cpp"
    "src/map/*.cpp"
    "src/solver/*.cpp"
)

if(WIN32)
    link_libraries(wininet)
endif()

# Executable chính
add_executable(HexaUdon src/main.cpp ${CORE_SOURCES})
set_target_properties(HexaUdon PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}"
    RUNTIME_OUTPUT_DIRECTORY_DEBUG "${CMAKE_CURRENT_SOURCE_DIR}"
    RUNTIME_OUTPUT_DIRECTORY_RELEASE "${CMAKE_CURRENT_SOURCE_DIR}"
    RUNTIME_OUTPUT_DIRECTORY_RELWITHDEBINFO "${CMAKE_CURRENT_SOURCE_DIR}"
    RUNTIME_OUTPUT_DIRECTORY_MINSIZEREL "${CMAKE_CURRENT_SOURCE_DIR}"
)

option(HEXAUDON_BUILD_TESTS "Build test and benchmark executables" OFF)
if(HEXAUDON_BUILD_TESTS)
    add_executable(test_all tests/test_all.cpp ${CORE_SOURCES})
    add_executable(benchmark tests/benchmark.cpp ${CORE_SOURCES})
endif()
