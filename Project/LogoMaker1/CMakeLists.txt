cmake_minimum_required(VERSION 3.19)
project(LogoMaker1)

set(CMAKE_CXX_STANDARD 14)

add_executable(LogoMaker1 main.cpp
        MouseEvents.cpp MouseEvents.h
        Slider.cpp Slider.h GuiComponent.h
        EventHandler.h
        Font.cpp Font.h
        Typing.cpp Typing.h
        TextArea.cpp TextArea.h
        TextInput.cpp TextInput.h
        ModuleLabel.cpp ModuleLabel.h
        ModuleBox.cpp ModuleBox.h
        TextDisplay.cpp TextDisplay.h
        KeyBoardShortCuts.cpp KeyBoardShortCuts.h)


target_link_libraries(LogoMaker1 sfml-graphics sfml-audio)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)