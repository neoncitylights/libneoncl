cmake_minimum_required(VERSION 3.27)
project(libneoncl
        LANGUAGES C CXX)

set(CMAKE_C_STANDARD 17)
add_library(libneoncl SHARED src/ncl_string.c)

# GoogleTest
include(FetchContent)
FetchContent_Declare(
        googletest
        URL
        https://github.com/google/googletest/archive/b10fad38c4026a29ea6561ab15fc4818170d1c10.zip
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

set_property(TARGET gmock PROPERTY FOLDER "gtest")
set_property(TARGET gmock_main PROPERTY FOLDER "gtest")
set_property(TARGET gtest PROPERTY FOLDER "gtest")
set_property(TARGET gtest_main PROPERTY FOLDER "gtest")

enable_testing()
add_executable(libneoncl-test
        tests/tests.c
)
target_link_libraries(
        libneoncl-test
        gtest_main
        libneoncl
)
include(GoogleTest)
gtest_discover_tests(libneoncl-test)
