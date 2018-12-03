#!/usr/bin/env bash
rm -rf output
mkdir output
cd output
gcc -S -fverbose-asm -masm=intel -fopenmp ../main.c -o main_assembly_output.s
gcc -fopenmp ../main.c -o test
gcc -O2 -fopenmp ../main.c -o test_o2
gcc -O3 -fopenmp ../main.c -o test_o3