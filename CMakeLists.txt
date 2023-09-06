cmake_minimum_required(VERSION 3.26)

project(opengl_demo)

set(CMAKE_CXX_STANDARD 17)

include_directories(${CMAKE_SOURCE_DIR}/src/
        ${CMAKE_SOURCE_DIR}/include/
)

find_library(OPENGL_LIBRARY glfw3 PATHS ${CMAKE_SOURCE_DIR}/lib/)

add_executable(opengl_demo src/main.cpp
        src/glad.c
)

target_link_libraries(opengl_demo ${OPENGL_LIBRARY})