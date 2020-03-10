#project(Example4Tests)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/..)

add_executable(simple_sum ${SRC} test_first_sum.cpp)
target_compile_definitions(simple_sum PRIVATE rank_STATIC_DEFINE )
add_test(simple_sum ${EXECUTABLE_OUTPUT_PATH}/simple_sum)

add_executable(precise_sum ${SRC} test_second_sum.cpp)
target_compile_definitions(precise_sum PRIVATE rank_STATIC_DEFINE )
add_test(precise_sum ${EXECUTABLE_OUTPUT_PATH}/precise_sum)

add_executable(simple ${SRC} test_first_numeric.cpp)
target_compile_definitions(simple PRIVATE rank_STATIC_DEFINE )
add_test(simple ${EXECUTABLE_OUTPUT_PATH}/simple)

add_executable(precise_num ${SRC} test_second_numeric.cpp)
target_compile_definitions(precise_num PRIVATE rank_STATIC_DEFINE )
add_test(precise_num ${EXECUTABLE_OUTPUT_PATH}/precise_num)