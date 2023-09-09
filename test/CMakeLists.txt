include_directories(${CMAKE_SOURCE_DIR}/${PROJECT_NAME})

set(TEST_NAME "${PROJECT_NAME}Test")

enable_testing()
add_executable(${TEST_NAME} main.c)
add_test(${TEST_NAME} ${TEST_NAME})