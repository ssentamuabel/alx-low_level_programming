#!/bin/bash
find . -maxdepth 1 -type f -name "*.c" -exec gcc -c {} -o {}.o \; && ar rcs liball.a *.o

