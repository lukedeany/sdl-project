cmake_minimum_required(VERSION 3.24...4.0)

project(SDL_Project)

SET(SOURCES src/main.cpp src/app.cpp)

find_package(SDL3 REQUIRED)
include_directories(${SDL3_INCLUDE_DIRS})

find_package(Vulkan REQUIRED)
include_directories(${Vulkan_INCLUDE_DIRS})

add_executable(SDL_Project ${SOURCES})
target_link_libraries(SDL_Project ${SDL3_LIBRARIES})
