set(CMAKE_CXX_STANDARD 14)
cmake_minimum_required(VERSION 3.0.0)
project(BouncingObject VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(BouncingObject main.cpp
BouncingObject.cpp BouncingObject.h)

target_link_libraries(BouncingObject sfml-graphics sfml-audio)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
