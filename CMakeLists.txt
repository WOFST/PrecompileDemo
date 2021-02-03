cmake_minimum_required(VERSION 3.16)

project(PrecompileDemo)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

LIST(APPEND CMAKE_PREFIX_PATH "D:/Qt/Qt5.14.0/5.14.0/msvc2017_64")

add_subdirectory(demoLib)
add_subdirectory(demoApp)

