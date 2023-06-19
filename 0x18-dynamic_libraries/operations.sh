#!/bin/bash

# Compile all .c files into object files
gcc -c -Wall -Werror -fpic operations.c

# Create the dynamic library
gcc -shared -o 100-operations.so operations.o

# Cleanup intermediate object files
rm operations.o

# Set the LD_LIBRARY_PATH environment variable.
export OP_LIBRARY_PATH=.:$OP_LIBRARY_PATH
