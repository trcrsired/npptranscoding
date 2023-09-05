cmake_minimum_required(VERSION 3.22)

project(npp)

set(CMAKE_CXX_STANDARD 23)

if (FAST_IO_DIR)
include_directories(${FAST_IO_DIR}/include)
endif ()

add_library(Utf816 OBJECT npp/Utf8_16.cpp)
target_precompile_headers(Utf816 PRIVATE npp/pch.hpp)

add_library(FileInterface OBJECT npp/FileInterface.cpp)

add_library(notepad++testmain OBJECT notepad++test.cc)
target_precompile_headers(notepad++testmain PRIVATE npp/pch.hpp)

add_library(notepad++testmainemoji OBJECT notepad++test_emoji.cc)
target_precompile_headers(notepad++testmainemoji REUSE_FROM notepad++testmain)

add_executable(notepad++test $<TARGET_OBJECTS:Utf816> $<TARGET_OBJECTS:FileInterface> $<TARGET_OBJECTS:notepad++testmain>)
add_executable(notepad++testemoji $<TARGET_OBJECTS:Utf816> $<TARGET_OBJECTS:FileInterface> $<TARGET_OBJECTS:notepad++testmainemoji>)

add_executable(fast_io_test fast_io_test.cc)
target_precompile_headers(fast_io_test PRIVATE fast_io/pch.hpp)

add_executable(fast_io_test_emoji fast_io_test_emoji.cc)
target_precompile_headers(fast_io_test_emoji REUSE_FROM fast_io_test)
