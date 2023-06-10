cmake_minimum_required(VERSION 3.5)

project(untitled1 LANGUAGES CXX)

set(SOURCE_FILES main.cpp ${MY_INCLUDE_DIRECTORY}/print.h print.cpp)
add_executable(untitled1 ${SOURCE_FILES})

target_link_libraries(untitled1 PRIVATE Qt6::Core)
target_include_directories(untitled1 PRIVATE ${MY_INCLUDE_DIRECTORY})
