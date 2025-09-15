cmake_minimum_required(VERSION 3.24...4.0)

project(SDL_Project)

SET(SOURCES src/main.cpp src/app.cpp)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

add_executable(SDL_Project ${SOURCES})
target_link_libraries(SDL_Project ${SDL2_LIBRARIES})
