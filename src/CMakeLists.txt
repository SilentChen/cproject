# cmake version and standard setting
cmake_minimum_required(VERSION 3.0)
set(CMAKE_CXX_STANDARD 11)

# bin output dir setting
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/../bin/)

# source dir setting
aux_source_directory(. DIR_SRCS)

# dynamic and static libs header's file include path setting
include_directories(./ ./libs/dynamic ./libs/static)
add_subdirectory(libs/dynamic)
add_subdirectory(libs/static)

# execu generate and libs link setting
add_executable(Silent.exe main.cpp)
target_link_libraries(Silent.exe SLIBS)
target_link_libraries(Silent.exe DLIBS)
