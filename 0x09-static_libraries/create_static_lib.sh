#!/bin/bash
gcc -c -Wall -Werror -Wextra -pendantic -std=gnu89 *.c
ar rc liball.a *.o
