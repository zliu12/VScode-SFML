set(CMAKE_CXX_STANDARD 14)
cmake_minimum_required(VERSION 3.0.0)
project(TextInput VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(TextInput main.cpp
Cursor.cpp Cursor.h)

target_link_libraries(TextInput sfml-graphics sfml-audio)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
