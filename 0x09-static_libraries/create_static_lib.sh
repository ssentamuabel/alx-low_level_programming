#!/bin/bash
find . -maxdepth 1 -type f -name "*.c" -exec gcc -c {} + && ar rcs liball.a *.o

