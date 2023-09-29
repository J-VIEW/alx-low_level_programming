#!/bin/bash
# Compile all .c files in the current directory into object files
gcc -Wall -Werror -Wextra -pedantic -c *.c
# Create the static library liball.a from the compiled object files
ar -rc liball.a *.o
# Index the library for faster linking (optional)
ranlib liball.a
