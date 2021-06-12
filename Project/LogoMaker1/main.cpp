#include <iostream>
#include "InputBox.h"
#include "Slider.h"
#include "Typing.h"
#include "ModuleBox.h"
#include "TextInput.h"
#include "Item.h"
#include "ItemList.h"
#include "DropDownMenu.h"
#include "ColorPicker.h"
#include "ColorItem.h"
#include "ColorList.h"
#include "ColorMenu.h"
#include "ColorGradient.h"
#include "FileTree.h"
#include "ModuleLabel.h"
#include "SFML/Graphics.hpp"
#include "PopWindow.h"
#include "TextArea.h"
#include "MenuBar.h"


int main() {
  // Create a window
  sf::RenderWindow win(sf::VideoMode(2800, 1650), "LogoMaker");
  win.setPosition({50, 50});

//  Typing type;                                                        // ok
//  ModuleLabel label();                                                // ok
//  ModuleLabel label("Test");                                          // ok
//  ModuleBox box;                                                      // ok
//  TextInput textInput;                                                // ok
//  Slider fontSize("Font Size", {10, 870});                            // ok
//  Slider textXAxis("Text X-Axis", {250,870});                         // ok
//  Slider textYAxis("Text Y-Axis", {500,870});                         // ok
//  Slider textOpacity("Text Opacity", {750, 870});                     // ok
//  Slider bgOpacity("Background Opacity", {1000, 870});                // ok
//  Slider shadowXAxis("Shadow X-Axis", {1250, 870});                   // ok
//  Slider shadowYAxis("Shadow Y-Axis", {1500, 870});                   // ok
//  Slider shadowOpacity("Shadow Opacity", {1750, 870});                // ok
//  Slider shadowSkew("Shadow Skew", {2000, 870});                      // ok
//  Item item;                                                          // ok
//  ItemList itemList(A, {200, 80});
//  InputBox menuListName;
//  InputBox menuListName1("Test1", {200, 0});
//  std::vector<std::string> file{"New Project", "Open Project", "Close Project", "Save Project", "Quit"};
//  std::vector<std::string> render{"Export Image"};
//  std::vector<std::string> font{"Black-Jack", "OpenSans-Bold", "Quicksand-Regular", "DeveloperFont"};
//  std::vector<std::string> viewMode{"Float Module", "Reset Module         (Command+F1)"};
//  DropDownMenu File("File", file, {0, 0});
//  DropDownMenu Render("Render", render, {400, 0});
//  DropDownMenu ViewMode("View Mode", viewMode, {800, 0});
//  DropDownMenu Font("Font", font, {1200, 0});
//  ColorPicker picker1("Font Color", {2040, 1150});
//  ColorPicker picker2("Background Color", {2410, 1150});
//  ColorItem colorItem1(sf::Color::Red, {2055, 1225});
//  ColorItem colorItem2(sf::Color::Yellow, {2055, 1270});
//  ColorItem colorItem3(sf::Color::Green, {2055, 1315});
//  ColorItem colorItem4(sf::Color::Blue, {2055, 1360});
//  ColorItem colorItem5(sf::Color::Cyan, {2055, 1405});
//  ColorItem colorItem6(sf::Color::Magenta, {2055, 1450});
//  ColorItem colorItem7(sf::Color::White, {2055, 1495});
//  ColorItem colorItem8(sf::Color::Black, {2055, 1540});
//  ColorList colorList({2040, 1200});
//  ColorMenu colorMenu1("Font Color", {2040, 1130}, {2040, 1200});
//  ColorMenu colorMenu2("BackGround Color", {2410, 1130}, {2410, 1200});
//  FileTree fileTree;
//  fileTree.push("Files", "MyLogo.txt");
//  ColorGradient colorGradient(sf::Color::Green);

  TextArea textArea;
  PopWindow popWin;
  MenuBar menuBar;

  while (win.isOpen()) {
    sf::Event mainWinEvent{};
    while (win.pollEvent(mainWinEvent)) {
      if (mainWinEvent.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
        win.close();
      }

//      type.addEventHandler(win, event);                         // ok
//      textInput.addEventHandler(win, event);                    // ok
//      fontSize.addEventHandler(win, event);                     // ok
//      textXAxis.addEventHandler(win, event);                    // ok
//      textYAxis.addEventHandler(win, event);                    // ok
//      textOpacity.addEventHandler(win, event);                  // ok
//      bgOpacity.addEventHandler(win, event)5;                    // ok
//      shadowXAxis.addEventHandler(win, event)                   // ok
//      shadowYAxis.addEventHandler(win, event)                   // ok
//      shadowOpacity.addEventHandler(win, event);                // ok
//      shadowSkew.addEventHandler(win, event);                   // ok
//      item.addEventHandler(win, event);                         // ok
//      itemList.addEventHandler(win, event);                     // ok
//      File.addEventHandler(win, mainWinEvent);                  // ok
//      Render.addEventHandler(win, mainWinEvent);                // ok
//      Font.addEventHandler(win, mainWinEvent);                  // ok
//      ViewMode.addEventHandler(win, mainWinEvent);              // ok
//      picker1.addEventHandler(win, mainWinEvent);               // ok
//      picker2.addEventHandler(win, mainWinEvent);               // ok
//      colorMenu1.addEventHandler(win, mainWinEvent);            // ok
//      colorMenu2.addEventHandler(win, mainWinEvent);            // ok
//      fileTree.addEventHandler(win, mainWinEvent);               // ok
      popWin.addEventHandler(win, mainWinEvent);
      textArea.addEventHandler(win, mainWinEvent);
      menuBar.addEventHandler(win, mainWinEvent);
    }

//    win.draw(menuListName);                                     // ok
//    win.draw(menuListName1);                                    // ok
//    win.draw(box);                                              // ok
//    win.draw(type);                                             // ok
//    win.draw(label);                                            // ok
//    win.draw(textInput);                                        // ok
//    win.draw(fontSize);                                         // ok
//    win.draw(textXAxis);                                        // ok
//    win.draw(textYAxis);                                        // ok
//    win.draw(textOpacity);                                      // ok
//    win.draw(bgOpacity);                                        // ok
//    win.draw(shadowXAxis);                                      // ok
//    win.draw(shadowYAxis);                                      // ok
//    win.draw(shadowOpacity);                                    // ok
//    win.draw(shadowSkew);                                       // ok
//    win.draw(item);                                             // ok
//    win.draw(itemList);                                         // ok
//    win.draw(File);                                             // ok
//    win.draw(Render);                                           // ok
//    win.draw(Font);                                             // ok
//    win.draw(ViewMode);                                         // ok
//    win.draw(picker1);                                          // ok
//    win.draw(picker2);                                          // ok
//    win.draw(colorItem1);                                       // ok
//    win.draw(colorItem2);                                       // ok
//    win.draw(colorItem3);                                       // ok
//    win.draw(colorItem4);                                       // ok
//    win.draw(colorItem5);                                       // ok
//    win.draw(colorItem6);                                       // ok
//    win.draw(colorItem7);                                       // ok
//    win.draw(colorItem8);                                       // ok
//    win.draw(colorList);                                        // ok
//    win.draw(colorGradient);                                    // ok
//    win.draw(colorMenu1);                                       // ok
//    win.draw(colorMenu2);                                       // ok
//    win.draw(fileTree);                                          // ok
//    win.draw(popWin);
//    item.update();                                              // ok
//    menuListName.update();                                      // ok
//    menuListName1.update();                                     // ok
//    dropDownMenu1.update();                                     // ok
//    dropDownMenu2.update();                                     // ok
//    File.update();                                              // ok
//    Render.update();                                            // ok
//    Font.update();                                              // ok
//    ViewMode.update();                                          // ok
//    picker1.update();                                           // ok
//    picker2.update();                                           // ok


    win.clear();
    win.draw(textArea);
    win.draw(menuBar);
    popWin.update();
    textArea.update();
    menuBar.update();

    if (States::exportImage) {
      sf::RenderTexture texture;
      texture.create(2800, 850);
      texture.draw(textArea);
      texture.display();
      texture.getTexture().copyToImage().saveToFile("../Saved Image/Logo.png");
    }

    win.display();
  }
  return 0;
}


