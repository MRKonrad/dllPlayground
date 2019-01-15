cmake_minimum_required(VERSION 3.9)

project(myexe VERSION 0.0.1 DESCRIPTION "myexe description")

add_executable(myexe main.cpp)

# add library api headers
include_directories(${PROJECT_SOURCE_DIR}/../install/include/)

# for linking
find_library(mylib NAMES mylib HINTS ${PROJECT_SOURCE_DIR}/../install/lib)
target_link_libraries(myexe PUBLIC ${mylib})

get_cmake_property (_variableNames VARIABLES)
list (SORT _variableNames)
foreach (_variableName ${_variableNames})
    message (STATUS "${_variableName}=${${_variableName}}")
endforeach()

