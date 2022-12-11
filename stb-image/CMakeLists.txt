cmake_minimum_required(VERSION 3.15)

project(stb-image)

add_library(${PROJECT_NAME} include/stb_image.h src/stb_image.cpp)
target_include_directories(${PROJECT_NAME} PUBLIC include/)