cmake_minimum_required (VERSION 3.24.2)

set(TEST_INSTALL ${CMAKE_CURRENT_SOURCE_DIR}/install)
set(GTEST_INSTALL ${CMAKE_CURRENT_SOURCE_DIR}/googletest)

set(CMAKE_CXX_STANDARD 14)
include(FetchContent)

FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG        v1.13.0
)
FetchContent_MakeAvailable(googletest)
