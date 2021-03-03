cmake_minimum_required(VERSION 3.0.0)
project(install_sfml VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(install_sfml main.cpp)

target_link_libraries(install_sfml sfml-graphics sfml-audio)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
