set(CXX_STANDARD_REQUIRED 14)
cmake_minimum_required(VERSION 3.0.0)
project(DropDownMenu VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(DropDownMenu main.cpp
               EventHandler.cpp EventHandler.h
               guiComponent.cpp guiComponent.h
               History.cpp History.h
               inputBox.cpp inputBox.h
               KeyBoardShortCuts.cpp KeyBoardShortCuts.h
               MouseEvent.cpp MouseEvent.h
               States.cpp States.h
               TextBox.cpp Textbox.h)

target_link_libraries(DropDownMenu sfml-graphics sfml-audio)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
