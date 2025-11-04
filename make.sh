#!/bin/bash
# Compile all .c files in the current folder into main executable

# Find all .c files
SOURCES=$(ls *.c 2>/dev/null)

# Check if there are any .c files
if [ -z "$SOURCES" ]; then
  echo "No C source files found."
  exit 1
fi

# Compile with gcc
gcc $SOURCES -o main

# Check if compilation succeeded
if [ $? -eq 0 ]; then
  echo "✅ Compilation successful! Run it with ./main"
else
  echo "❌ Compilation failed."
fi
