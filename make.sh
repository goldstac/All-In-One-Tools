#!/bin/bash
# Compile all .c and .cpp files in the current folder into main

# Check if there are any C or C++ files
shopt -s nullglob
c_files=( *.c )
cpp_files=( *.cpp )

if [ ${#c_files[@]} -eq 0 ] && [ ${#cpp_files[@]} -eq 0 ]; then
    echo "No C or C++ files found in the current directory."
    exit 1
fi

# Compile all C and C++ files
g++ *.c *.cpp -o main

if [ $? -eq 0 ]; then
    echo "Compilation successful! Executable 'main' created."
else
    echo "Compilation failed."
fi
