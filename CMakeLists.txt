cmake_minimum_required(VERSION 3.14.0)
project(MLFE VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)

# Add Subdirectories
add_subdirectory(3rdparty)
add_subdirectory(include)
add_subdirectory(src)

option(BUILD_EXAMPLES "OFF if you don't want to buid examples" ON)

if(BUILD_EXAMPLES)
    message(STATUS "BUILD_EXAMPLES option is ON")
    add_subdirectory(examples)
endif()

# Testing
include(CTest)
enable_testing()

option(BUILD_TESTS "OFF if you don't want to buid tests" ON)

if(BUILD_TESTS)
    message(STATUS "BUILD_TESTS option is ON")
    add_subdirectory(tests)
endif()

# Packaging
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
