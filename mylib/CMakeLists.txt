cmake_minimum_required(VERSION 3.9)

project(mylib VERSION 0.0.1 DESCRIPTION "mylib description")

# IMPORTANT!!! Otherwise lib is not build
SET(BUILD_SHARED_LIBS ON)

#file (GLOB_RECURSE LIB_FILES ${PROJECT_SOURCE_DIR}/*.h* ${PROJECT_SOURCE_DIR}/*.c*)
set(LIB_FILES mylib.h mylib.hxx mylibApi.h mylibApi.cpp)
add_library(mylib SHARED ${LIB_FILES})

include_directories(${PROJECT_BINARY_DIR})
set_target_properties(mylib PROPERTIES COMPILE_FLAGS -Dmylib_EXPORT)
set_target_properties(mylib PROPERTIES LINKER_LANGUAGE CXX)

include(GenerateExportHeader)
generate_export_header(mylib)

set(API_FILES mylibApi.h  ${PROJECT_BINARY_DIR}/mylib_export.h mylib.h)

set(CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR}/../install)
install(TARGETS mylib DESTINATION lib)
install (FILES ${API_FILES} DESTINATION ${CMAKE_INSTALL_PREFIX}/include)

add_executable(myexe main.cpp)
target_link_libraries(myexe mylib)
