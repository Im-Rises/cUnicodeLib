set(TEST_NAME "${PROJECT_NAME}Test")

enable_testing()

add_executable(${TEST_NAME} main.c)
target_link_libraries(${TEST_NAME} ${PROJECT_NAME})
target_include_directories(${TEST_NAME} PRIVATE ${PROJECT_SOURCE_DIR}/${PROJECT_NAME})
add_test(${TEST_NAME} ${TEST_NAME})
