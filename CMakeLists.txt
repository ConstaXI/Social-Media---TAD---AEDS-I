cmake_minimum_required(VERSION 3.17)
project(social_media C)

set(CMAKE_C_STANDARD 11)

add_executable(social_media sources/main.c headers/rede_social.h sources/rede_social.c headers/interface.h sources/interface.c)