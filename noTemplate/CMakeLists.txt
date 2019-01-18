cmake_minimum_required(VERSION 3.10)
project(noTemplates)

#set(CMAKE_CXX_STANDARD 98)

add_library(noTemplates SHARED
        library.h
        library.cpp)
include_directories(${PROJECT_BINARY_DIR}) # to make noTemplates_export.h visible

#set_target_properties(noTemplates PROPERTIES LINKER_LANGUAGE CXX)

include(GenerateExportHeader)
generate_export_header(noTemplates)


