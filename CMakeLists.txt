cmake_minimum_required(VERSION 3.27)
project(libneoncl
        LANGUAGES C)

set(CMAKE_C_STANDARD 17)

add_library(libneoncl SHARED libneoncl/strings.c)
# add_test(tests.c)
