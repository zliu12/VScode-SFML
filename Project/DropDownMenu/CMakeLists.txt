set(CMAKE_CXX_STANDARD 14)
cmake_minimum_required(VERSION 3.0.0)
project(DropDownMenu VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(DropDownMenu main.cpp
               DropDownMenu.cpp DropDownMenu.h
               EventHandler.cpp EventHandler.h
               guiComponent.cpp guiComponent.h
               History.cpp History.h
               InputBox.cpp InputBox.h
               Item.cpp Item.h
               ItemList.cpp ItemList.h
               KeyBoardShortCuts.cpp KeyBoardShortCuts.h
               linkedList.cpp linkedList.h
               MouseEvent.cpp MouseEvent.h
               Node.cpp Node.h
               NodeIterator.cpp NodeIterator.h
               projectFont.cpp projectFont.h
               Snapshot.cpp Snapshot.h
               SnapshotInterface.cpp SnapshotInterface.h
               States.cpp States.h)

target_link_libraries(DropDownMenu sfml-graphics sfml-audio)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
