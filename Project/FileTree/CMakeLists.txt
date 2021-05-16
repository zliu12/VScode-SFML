set(CMAKE_CXX_STANDARD 14)
cmake_minimum_required(VERSION 3.0.0)
project(FileTree VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(FileTree main.cpp
FileItem.cpp FileItem.h 
FileNode.cpp FileNode.h 
FileTree.cpp FileTree.h 
Item.cpp Item.h
EventHandler.cpp EventHandler.h 
GuiComponent.cpp GuiComponent.h 
linkedList.cpp linkedList.h 
MouseEvents.cpp MouseEvents.h 
Node.cpp Node.h 
NodeIterator.cpp NodeIterator.h 
ProjectFont.cpp ProjectFont.h 
States.cpp States.h 
Snapshot.cpp Snapshot.h 
SnapshotInterface.cpp SnapshotInterface.h 
ProjectImage.cpp ProjectImage.h 
)

target_link_libraries(FileTree sfml-graphics sfml-audio)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
