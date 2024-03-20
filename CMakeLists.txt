cmake_minimum_required(VERSION 3.25 FATAL_ERROR)

project(
    "FirstProjectInCMake"
    VERSION 1.1.0
    DESCRIPTION "CMake C Project Template for Operating Systems II"
    LANGUAGES C
)

set(CMAKE_C_STANDARD 17)

include_directories(include)

file(GLOB_RECURSE SOURCES "src/*.c")

add_executable(${PROJECT_NAME} ${SOURCES})

add_subdirectory(libs/libdyn)
add_subdirectory(libs/libsta)

target_include_directories(${PROJECT_NAME} PUBLIC libs/libdyn/include)
target_include_directories(${PROJECT_NAME} PUBLIC libs/libsta/include)

target_link_libraries(${PROJECT_NAME} StatiCLib DynamicCLib)