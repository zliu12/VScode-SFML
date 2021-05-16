set(CMAKE_CXX_STANDARD 14)
cmake_minimum_required(VERSION 3.0.0)
project(MenuBar VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(MenuBar main.cpp
DropDownMenu.cpp DropDownMenu.h 
EventHandler.cpp EventHandler.h 
History.cpp History.h
Item.cpp Item.h 
ItemList.cpp ItemList.h
KeyBoardShortCuts.cpp KeyBoardShortCuts.h 
MouseEvent.cpp MouseEvent.h 
Node.cpp Node.h
NodeIterator.cpp NodeIterator.h
Snapshot.cpp Snapshot.h
SnapshotInterface.cpp SnapshotInterface.h 
States.cpp States.h
StatesItem.cpp StatesItem.h
StatesInputBox.cpp StatesInputBox.h 
guiComponent.cpp guiComponent.h
InputBox.cpp InputBox.h  
linkedList.cpp linkedList.h
projectFont.cpp projectFont.h
MenuBar.cpp MenuBar.h 
Menu.cpp Menu.h 
)

target_link_libraries(MenuBar sfml-graphics sfml-audio)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
