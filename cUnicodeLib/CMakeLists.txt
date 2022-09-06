cmake_minimum_required (VERSION 3.8)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(SRCS "demo.c" "cUnicodeLib.c")
set(HEADERS "cUnicodeLib.h")

add_executable(${PROJECT_NAME} ${SRCS} ${HEADERS})
