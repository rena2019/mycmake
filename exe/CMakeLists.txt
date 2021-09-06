# execute with: cmake -G "Unix Makefiles" .. in build subfolder or with cmake -B build -G "Unix Makefiles" in source folder
cmake_minimum_required(VERSION 3.21)
project(MyEXE)
#path to header file
include_directories(${PROJECT_SOURCE_DIR}/../lib)
#path to lib
link_directories(${PROJECT_SOURCE_DIR}/../lib/build)

find_library(MYLIB_LIBRARY mylib PATHS ${PROJECT_SOURCE_DIR}/../lib/build)
message("MYLIB_LIBRARY: ${MYLIB_LIBRARY}")
add_executable(myexe main.cpp)

# https://cmake.org/cmake/help/git-stage/guide/importing-exporting/index.html
#add_library(bar SHARED IMPORTED)
#set_property(TARGET bar PROPERTY IMPORTED_LOCATION "D:/_projects/_my/cmake/dll/build/libmydll.dll.a")
#set_property(TARGET bar PROPERTY IMPORTED_IMPLIB "D:/_projects/_my/cmake/dll/build/libmydll.dll")
target_link_libraries(myexe "${MYLIB_LIBRARY}")
