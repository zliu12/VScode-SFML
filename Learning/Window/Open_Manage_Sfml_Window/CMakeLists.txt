cmake_minimum_required(VERSION 3.0.0)
project(open_manage_sfml_window VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(open_manage_sfml_window main.cpp)

target_link_libraries(open_manage_sfml_window sfml-graphics sfml-audio)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
