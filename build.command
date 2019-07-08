#!/bin/bash
cd $(dirname $0)
/Applications/CMake.app/Contents/bin/cmake ./ -DCMAKE_PREFIX_PATH=/Applications/Qt/5.13.0/clang_64
make
/Applications/Qt/5.13.0/clang_64/bin/macdeployqt Hayaemon.app
rm *.h
rm *.cpp
rm cmake_install.cmake
rm CMakeCache.txt
rm Makefile
rm -r CMakeFiles
rm -r Hayaemon_autogen
