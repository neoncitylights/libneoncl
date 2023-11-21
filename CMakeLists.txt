cmake_minimum_required(VERSION 3.27)
project(ncl_string
        LANGUAGES C)

set(CMAKE_C_STANDARD 17)

add_library(ncl_string SHARED src/ncl_string.c)
# add_test(tests.c)
