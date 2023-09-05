cmake_minimum_required(VERSION 3.22)

project(npp)

set(CMAKE_CXX_STANDARD 23)

if (FAST_IO_DIR)
include_directories(${FAST_IO_DIR}/include)
endif ()

add_library(Utf816 OBJECT Utf8_16.cpp)
target_precompile_headers(Utf816 PRIVATE pch.hpp)

add_library(FileInterface OBJECT FileInterface.cpp)

add_library(mainmain OBJECT main.cc)
target_precompile_headers(mainmain PRIVATE pch.hpp)

add_executable(main $<TARGET_OBJECTS:Utf816> $<TARGET_OBJECTS:FileInterface> $<TARGET_OBJECTS:mainmain>)
