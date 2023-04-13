#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rc linball.o
ranlib linball.o
