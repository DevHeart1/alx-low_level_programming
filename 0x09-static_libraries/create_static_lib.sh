#!/bin/bash
ar -rc liball.a *.o
gcc -Wall -pedantic -Werror -Wextra -c *.c
ranlib liball.a
