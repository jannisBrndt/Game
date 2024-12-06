cmake_minimum_required(VERSION 3.10)
project(Game LANGUAGES CXX)

# Set C++ standard globally for all targets
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Manually set the include directory for nlohmann_json
set(NLOHMANN_JSON_INCLUDE_DIR "/usr/local/Cellar/nlohmann-json/3.11.3/include")
include_directories(${NLOHMANN_JSON_INCLUDE_DIR})

# Enable testing
enable_testing()

# Manually set include and lib directories for Google Test
set(GTEST_INCLUDE_DIR "/usr/local/Cellar/googletest/1.15.2/include")
set(GTEST_LIB_DIR "/usr/local/Cellar/googletest/1.15.2/lib")
include_directories(${GTEST_INCLUDE_DIR})
link_directories(${GTEST_LIB_DIR})

# Main Game Executable
file(GLOB_RECURSE GAME_SOURCES "src/*.cpp")
list(FILTER GAME_SOURCES EXCLUDE REGEX ".*main\\.cpp$")
add_executable(${PROJECT_NAME} src/main.cpp ${GAME_SOURCES})
target_include_directories(${PROJECT_NAME} PRIVATE ${PROJECT_SOURCE_DIR}/include)
# Assuming nlohmann_json is header-only and does not need to link a library
# If it's not header-only, you would need to specify the library like below in the test executable

# Test Executable (excludes main.cpp)
file(GLOB_RECURSE TEST_SOURCES "test/*.cpp")
add_executable(${PROJECT_NAME}_Test ${TEST_SOURCES} ${GAME_SOURCES})
target_include_directories(${PROJECT_NAME}_Test PRIVATE ${PROJECT_SOURCE_DIR}/include)
# Link Google Test libraries
target_link_libraries(${PROJECT_NAME}_Test PRIVATE gtest gtest_main pthread)

# Register tests with CTest
add_test(NAME AllTestsInGame COMMAND ${PROJECT_NAME}_Test)

# Compiler options and definitions
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Debug)
endif()

target_compile_options(${PROJECT_NAME} PRIVATE
    $<$<CONFIG:Debug>:-g3 -O0>
    $<$<CONFIG:Release>:-O3>
)
target_compile_definitions(${PROJECT_NAME} PRIVATE
    $<$<CONFIG:Debug>:DEBUG>
)
