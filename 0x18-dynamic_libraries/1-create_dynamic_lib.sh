#!/bin/bash
gcc -c *.c -fpic
gcc *.o -shared -o 1-create_dynamic_lib.sh

