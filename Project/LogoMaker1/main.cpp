#include <iostream>
#include "SFML/Graphics.hpp"
#include "Slider.h"
#include "Typing.h"
#include "ModuleLabel.h"
#include "ModuleBox.h"
#include "TextInput.h"
#include "TextArea.h"


int main() {
  sf::RenderWindow win(sf::VideoMode(2800, 1500), "LogoMaker");
  win.setPosition({50, 50});

  sf::RenderWindow win1;

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
  TextArea textArea;


  while (win.isOpen()) {
    sf::Event event{};
    while (win.pollEvent(event)) {
      if (event.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
        win.close();
      }

      // Press F1 to open a new window
      if (sf::Keyboard::isKeyPressed(sf::Keyboard::F1)) {
        sf::Event event1{};
        win1.create(sf::VideoMode(500, 500), "win1");
        while (win1.pollEvent(event1)) {
          if (event1.type == sf::Event::Closed) {
            win1.close();
          }
        }
      }
//      std::cout << sf::Mouse::getPosition(win).x << " " << sf::Mouse::getPosition(win).y << std::endl;
//      std::cout << win.getSize().x << " " << win.getSize().y << std::endl;


//      type.addEventHandler(win, event);                         // ok
//      textInput.addEventHandler(win, event);                    // ok
//      fontSize.addEventHandler(win, event);                     // ok
//      textXAxis.addEventHandler(win, event);                    // ok
//      textYAxis.addEventHandler(win, event);                    // ok
//      textOpacity.addEventHandler(win, event);                  // ok
//      bgOpacity.addEventHandler(win, event);                    // ok
//      shadowXAxis.addEventHandler(win, event)                   // ok
//      shadowYAxis.addEventHandler(win, event)                   // ok
//      shadowOpacity.addEventHandler(win, event);                // ok
//      shadowSkew.addEventHandler(win, event);                   // ok

      textArea.addEventHandler(win, event);
    }

    win.clear();
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
    win.draw(textArea);
    win.display();


    // For the pop window win1
    win1.clear(sf::Color::Yellow);
    win1.display();
  }

  return 0;
}
