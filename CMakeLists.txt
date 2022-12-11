cmake_minimum_required(VERSION 3.15)
project(TRYGLFW)

find_package(OpenGL REQUIRED)

add_subdirectory(glfw)


add_executable(${PROJECT_NAME} main.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC glfw/include)
target_link_directories(${PROJECT_NAME} PRIVATE glfw/src)
target_link_libraries(${PROJECT_NAME} glfw)