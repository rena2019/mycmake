# execute with: cmake -G "Unix Makefiles" .. in build subfolder or with cmake -B build -G "Unix Makefiles" in source folder
cmake_minimum_required(VERSION 3.21)
project(mylib)
include_directories(${PROJECT_SOURCE_DIR}/build)
add_library(mylib SHARED main.cpp) #erzeugt libmydll.dll.a + libmydll.dll