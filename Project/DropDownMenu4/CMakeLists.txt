set(CMAKE_CXX_STANDARD 14)
cmake_minimum_required(VERSION 3.0.0)
project(DropDownMenu4 VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(DropDownMenu4 main.cpp
EventHandler.cpp EventHandler.h
States.cpp States.h
Snapshot.cpp Snapshot.h
SnapshotInterface.cpp SnapshotInterface.h
GuiComponent.cpp GuiComponent.h
KeyBoardShortCuts.cpp KeyBoardShortCuts.h
MouseEvents.cpp MouseEvents.h
History.cpp History.h
Node.cpp Node.h
NodeIterator.cpp NodeIterator.h
linkedList.cpp linkedList.h
ProjectFont.cpp ProjectFont.h
Item.cpp Item.h
InputBox.cpp InputBox.h
ItemList.cpp ItemList.h
DropDownMenu.cpp DropDownMenu.h
)

target_link_libraries(DropDownMenu4 sfml-graphics sfml-audio)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
