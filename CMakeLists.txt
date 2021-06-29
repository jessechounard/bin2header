cmake_minimum_required(VERSION 3.2)
project(bin2header C)

add_executable(bin2header
    main.c
)

install (TARGETS bin2header DESTINATION bin)
