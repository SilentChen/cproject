cmake_minimum_required(VERSION 3.0)

project(Silent)

set(CMAKE_CXX_STANDARD 11)

ADD_SUBDIRECTORY(src temp)

INSTALL(PROGRAMS run.sh DESTINATION bin)
