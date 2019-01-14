cmake_minimum_required(VERSION 3.9)

project(mylib VERSION 0.0.1 DESCRIPTION "mylib description")

# IMPORTANT!!! Otherwise lib is not build
SET(BUILD_SHARED_LIBS ON)

add_library(mylib SHARED mylib.h mylib.hxx mylib.cpp)
set_target_properties(mylib PROPERTIES COMPILE_FLAGS -Dmylib_EXPORT)
set_target_properties(mylib PROPERTIES LINKER_LANGUAGE CXX)

#include(GenerateExportHeader)
#generate_export_header(mylib)

file (GLOB_RECURSE LIB_FILES *.h*)
set(CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR}/../install)
install(TARGETS mylib DESTINATION lib)
install (FILES ${LIB_FILES} DESTINATION ${CMAKE_INSTALL_PREFIX}/include)

add_executable(dupa main.cpp)
target_link_libraries(dupa mylib)
