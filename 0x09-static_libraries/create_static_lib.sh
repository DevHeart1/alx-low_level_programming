#!/bin/bash
ar -rc liball.a *.c
gcc -Wall -pedantic -Werror -Wextra -c *.c
ranlib liball.a
