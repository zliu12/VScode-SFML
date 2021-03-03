cmake_minimum_required(VERSION 3.0.0)
project(shadow_box_effect VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(shadow_box_effect main.cpp)

target_link_libraries(shadow_box_effect sfml-graphics sfml-audio)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
