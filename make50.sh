#!/bin/bash

clang -fsanitize=signed-integer-overflow -fsanitize=undefined -ggdb3 -O0 -std=c11 -Wall -Werror -Wextra -Wno-sign-compare -Wshadow   $1.c  -lcrypt -lcs50 -lm -o $1.o