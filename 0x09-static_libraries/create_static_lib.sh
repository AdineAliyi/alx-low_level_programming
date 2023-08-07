#!/bin/bash
gcc -Wall -Wextra -error -pedantic -c *.c
ar rc liball.a *.o
