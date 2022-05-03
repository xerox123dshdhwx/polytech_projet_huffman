cmake_minimum_required(VERSION 3.22)
project(polytech_huffman C)

set(CMAKE_C_STANDARD 99)

add_executable(polytech_huffman main.c source/fonction.c header/fonction.h)
