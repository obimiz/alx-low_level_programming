#!/bin/bash

# Find all .c files in the current directory
c_files=$(find . -maxdepth 1 -type f -name "*.c")

# Compile each .c file into an object file
for c_file in $c_files; do
    object_file="${c_file%.c}.o"
    gcc -c -fPIC "$c_file" -o "$object_file"
    if [ $? -ne 0 ]; then
        echo "Compilation failed for $c_file"
        exit 1
    fi
done

# Create the dynamic library
gcc -shared -o liball.so *.o

# Clean up object files
rm -f *.o

echo "Dynamic library liball.so created successfully."
