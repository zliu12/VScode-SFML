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
        KeyBoardShortCuts.cpp KeyBoardShortCuts.h
        Item.cpp Item.h
        InputBox.cpp InputBox.h
        ItemList.cpp ItemList.h
        LinkedList.h LinkedList.cpp
        Node.h Node.cpp
        NodeIterator.h NodeIterator.cpp
        DropDownMenu.cpp DropDownMenu.h
        PopWindow.cpp PopWindow.h
        States.cpp States.h
        ColorPicker.cpp ColorPicker.h
        MenuBar.cpp MenuBar.h
        ColorList.cpp ColorList.h
        ColorItem.cpp ColorItem.h
        ColorMenu.cpp ColorMenu.h
        ColorGradient.cpp ColorGradient.h FileItem.cpp FileItem.h ProjectIcon.cpp ProjectIcon.h FileNode.cpp FileNode.h FileTree.cpp FileTree.h)


target_link_libraries(LogoMaker1 sfml-graphics sfml-audio)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)