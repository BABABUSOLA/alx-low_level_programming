#!/bin/bash

# Compile all .c files into object files
gcc -c -Wall -Werror -fpic putshack.c

# Create the dynamic library
gcc -shared -o putshack.so putshack.o

# Cleanup intermediate object files
rm putshack.o

# Set the LD_LIBRARY_PATH environment variable.
export LD_PRELOAD=.:$LD_PRELOAD
