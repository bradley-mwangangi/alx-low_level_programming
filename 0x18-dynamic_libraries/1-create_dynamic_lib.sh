#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c -fPIC *.c
gcc -shared -Wall -Werror -Wextra -pedantic -o liball.so *.o
