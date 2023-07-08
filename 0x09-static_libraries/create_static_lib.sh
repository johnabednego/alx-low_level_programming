#!/bin/bash

# Compile .c files into object files
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c

# Create the static library liball.a
ar rcs liball.a *.o

# Clean up the object files
rm *.o
