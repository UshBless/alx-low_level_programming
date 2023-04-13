#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rc linball.a
ranlib linball.a
