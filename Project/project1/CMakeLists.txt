set(CXX_STANDARD_REQUIRED 14)
cmake_minimum_required(VERSION 3.0.0)
project(project1 VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(project1 main.cpp
              EventHandler.cpp EventHandler.h
              States.cpp States.h
              Snapshot.cpp Snapshot.h
              SnapshotInterface.cpp SnapshotInterface.h
              guiComponent.cpp guiComponent.h 
              KeyBoardShortCutUndo.cpp KeyBoardShortCutUndo.h
              MouseEvent.cpp MouseEvent.h
              History.cpp History.h
              TextInput.cpp TextInput.h
              InputBoxLabel.cpp InputBoxLabel.h
              InputBox.cpp InputBox.h
              Cursor.cpp Cursor.h
              Type.cpp Type.h)

target_link_libraries(project1 sfml-graphics sfml-audio)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
