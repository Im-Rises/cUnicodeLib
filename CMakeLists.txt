cmake_minimum_required(VERSION 3.8)

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

project("cUnicodeLib")
add_subdirectory(${PROJECT_NAME})

enable_testing()
add_subdirectory("test")