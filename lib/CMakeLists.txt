
cmake_minimum_required(VERSION 3.11-3.18)

project(lib)

file(GLOB SOURCES "${PROJECT_SOURCE_DIR}/src/*.cpp")

add_library(lib ${SOURCES})

target_include_directories(${PROJECT_NAME}
    PUBLIC ${PROJECT_SOURCE_DIR}/include)

target_compile_features(lib PUBLIC cxx_std_20)