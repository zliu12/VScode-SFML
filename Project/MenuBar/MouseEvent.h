/**
 * MouseEvent - Header
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#ifndef MOUSEEVENT_H_
#define MOUSEEVENT_H_
#include "SFML/Graphics.hpp"

template<class T>
class MouseEvent {
 public:
  // Return true if mouse clicks on the object
  static bool mouseClicked(T& object, sf::RenderWindow& window);

  // Return true if mouse clicks on the window
  static bool mouseClicked(sf::RenderWindow& window, sf::Event event);

  // Return true if double clicked
  static bool mouseDoubleClicked();

  // Return true if the object has been clicked and the mouse has dragged over the object
  static bool draggedOver(T& object, sf::RenderWindow& window, sf::Event event);

  // Return true if mouse is hovered over the object
  static bool hovered(T& object, sf::RenderWindow& window);

 private:
  static sf::Clock clock;
  static int clicks;
  static void countClicks(sf::Event event);
};

#include "MouseEvent.cpp"
#endif  // MOUSEEVENT_H_