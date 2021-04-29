set(CXX_STANDARD_REQUIRED 14)
cmake_minimum_required(VERSION 3.0.0)
project(MidTermProject VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(MidTermProject main.cpp
               Cursor.cpp Cursor.h
               EventHandler.cpp EventHandler.h
               guiComponent.cpp guiComponent.h
               History.cpp History.h
               KeyBoardShortCuts.cpp KeyBoardShortCuts.h
               MouseEvent.cpp MouseEvent.h
               Snapshot.cpp Snapshot.h
               SnapshotInterface.cpp SnapshotInterface.h
               States.cpp States.h
               TextBox.cpp TextBox.h
               TextBoxLabel.cpp TextBoxLabel.h
               TextInput.cpp TextInput.h
               Typing.cpp Typing.h)

target_link_libraries(MidTermProject sfml-graphics sfml-audio)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)


set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
