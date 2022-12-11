cmake_minimum_required(VERSION 3.15)
project(TRYGLFW)

find_package(OpenGL REQUIRED)

add_subdirectory(glfw)
add_subdirectory(glad)
add_subdirectory(glm)
add_subdirectory(stb-image)

file(GLOB_RECURSE SRC_FILES src/*.cpp)
add_executable(${PROJECT_NAME} main.cpp ${SRC_FILES})

target_include_directories(${PROJECT_NAME} PUBLIC glfw/include ${CMAKE_CURRENT_SOURCE_DIR}/include) 
target_link_directories(${PROJECT_NAME} PRIVATE glfw/src)
target_link_libraries(${PROJECT_NAME} glfw glad glm stb-image OpenGL::GL)


