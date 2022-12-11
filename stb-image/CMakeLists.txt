cmake_minimum_required(VERSION 3.15)

project(stb-image)

add_library(${PROJECT_NAME} include/stb-image.h src/std-image.cpp)
target_include_directories(${PROJECT_NAME} PUBLIC include/)