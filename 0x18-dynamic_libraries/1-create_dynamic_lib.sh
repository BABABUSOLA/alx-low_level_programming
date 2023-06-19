#!/bin/bash

# Compile all .c files into object files
gcc -c -Wall -Werror -fpic *.c

# Create the dynamic library
gcc -shared -o liball.so *.o

# Cleanup intermediate object files
rm *.o

# Set the LD_LIBRARY_PATH environment variable.
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH

