/**
 * Project 1 - Mouse Event Header
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#ifndef MOUSEEVENT_H_
#define MOUSEEVENT_H_
#include "SFML/Graphics.hpp"
#include "guiComponent.h"

template <class T>
class MouseEvents : public GuiComponent{
 public:
  // Return true if the mouse clicks on the object
  static bool mouseClicked(T& object, sf::RenderWindow& window) ;

  // Return true if the mouse clicks anywhere in the window
  static bool mouseClicked(sf::RenderWindow& window, sf::Event event);

  // Return true if the mouse has been double clicked
  static bool mouseDoubleClicked();

  // Return true if the object has been clicked and the mouse has dragged over the object
  static bool draggedOver(T& object, sf::RenderWindow& window, sf::Event event);

  // Return true if the mouse is hovered over the object
  static bool hovered(T& object, sf::RenderWindow& window);

 private:
  // This is used to determine if a double click or triple click occured
  static sf::Clock clock;
  static int clicks;
  static void countClicks(sf::Event event);
};

#include "MouseEvent.cpp"
#endif  // MOUSEEVENT_H_