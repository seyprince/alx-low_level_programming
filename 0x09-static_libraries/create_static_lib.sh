#!/bin/bash

# Compile all .c files into object files
gcc -c *.c

# Create the static library using ar command
ar -rc liball.a *.o

# Index the library for faster linking
ranlib liball.a

# Clean up by removing object files
rm *.o

