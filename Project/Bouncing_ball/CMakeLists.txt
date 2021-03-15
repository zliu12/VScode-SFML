cmake_minimum_required(VERSION 3.0.0)
project(bouncing_ball VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(bouncing_ball main.cpp BounceIt.h BounceIt.cpp)

target_link_libraries(bouncing_ball sfml-graphics sfml-audio)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
