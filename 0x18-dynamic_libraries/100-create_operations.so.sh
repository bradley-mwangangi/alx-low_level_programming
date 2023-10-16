#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c -fPIC operations.c
gcc -shared -Wall -Werror -Wextra -pedantic -o 100-operations.so operations.o
