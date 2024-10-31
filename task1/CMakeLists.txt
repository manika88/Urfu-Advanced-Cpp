cmake_minimum_required(VERSION 3.25)

project(matrix)

find_package(Boost COMPONENTS unit_test_framework REQUIRED)
if (Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
endif (Boost_FOUND)

add_library(matrix STATIC matrix.cpp)

if (Boost_FOUND)
    enable_testing()
    add_subdirectory(tests)
endif (Boost_FOUND)
