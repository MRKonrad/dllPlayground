cmake_minimum_required(VERSION 3.10)
project(anotherDll)

#set(CMAKE_CXX_STANDARD 98)

add_library(anotherDll SHARED libraryApi.h library.h library.hxx main.cpp)
include_directories(${PROJECT_BINARY_DIR}) # to make anotherdll_export.h visible

#set_target_properties(anotherDll PROPERTIES LINKER_LANGUAGE CXX)

include(GenerateExportHeader)
generate_export_header(anotherDll)


