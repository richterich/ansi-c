cmake_minimum_required(VERSION 3.14)

set(CMAKE_C_COMPILER tcc)
set(CMAKE_C_EXTENSIONS False)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall")

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/../bin)

project(ANSI-C C)

add_subdirectory(exercise_1_1)
add_subdirectory(exercise_1_2)
add_subdirectory(exercise_1_3)
add_subdirectory(exercise_1_4)
add_subdirectory(exercise_1_5)
add_subdirectory(exercise_1_6)
add_subdirectory(exercise_1_7)
add_subdirectory(exercise_1_8)
add_subdirectory(exercise_1_9)
add_subdirectory(exercise_1_10)
add_subdirectory(exercise_1_11)
add_subdirectory(exercise_1_12)
