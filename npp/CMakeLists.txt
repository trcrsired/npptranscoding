cmake_minimum_required(VERSION 3.22)

project(npp)

set(CMAKE_CXX_STANDARD 23)

add_library(Utf816 OBJECT Utf8_16.cpp)
target_precompile_headers(Utf816 PRIVATE pch.hpp)

add_library(FileInterface OBJECT FileInterface.cpp)

add_library(mainmain OBJECT main.cc)

add_executable(main $<TARGET_OBJECTS:Utf816> $<TARGET_OBJECTS:FileInterface> $<TARGET_OBJECTS:mainmain>)
