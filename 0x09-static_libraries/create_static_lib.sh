#!bin/bash
gcc -Wall -Wextra -Werror -pedantic *.c
ar rc liball.a *.o
