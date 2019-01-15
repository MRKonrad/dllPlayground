cmake_minimum_required(VERSION 3.9)

project(mylib VERSION 0.0.1 DESCRIPTION "mylib description")

# cmake library configuration
file(GLOB_RECURSE LIB_FILES src/*.h* src/*.c*) # all files needed to build the library
add_library(mylib SHARED ${LIB_FILES})

# cmake library configuration
include_directories(${PROJECT_BINARY_DIR}) # to make mylib_export.h visible
set_target_properties(mylib PROPERTIES LINKER_LANGUAGE CXX) # has to be explicit if there are no .cpp files in the project

# generating mylib_export.h
include(GenerateExportHeader)
generate_export_header(mylib)

# All .h files are in the API, but not .hxx or .cpp
file(GLOB_RECURSE API_FILES src/*.h) # all the api files
set(API_FILES ${API_FILES} ${PROJECT_BINARY_DIR}/mylib_export.h) # to make mylib_export.h available for export

# installation
set(CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR}/../install) # just laziness. Should be configure from cmake command line
install(TARGETS mylib DESTINATION lib) # library binaries
install (FILES ${API_FILES} DESTINATION ${CMAKE_INSTALL_PREFIX}/include) # headers

# just to play
add_executable(myexe src/main.cpp)
target_link_libraries(myexe mylib)
