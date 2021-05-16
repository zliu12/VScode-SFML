/**
 * MouseEvents - Implementation
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#ifndef MOUSEEVENTS_H_
#define MOUSEEVENTS_H_
#include "SFML/Graphics.hpp"

template<class T>
class MouseEvents {
 public:
  // Return true if the mouse clicks on the object
  static bool mouseClicked(T& object, sf::RenderWindow& window);

  // Return true if the mouse clicks anywhere in the window
  static bool mouseClicked(sf::RenderWindow& window, sf::Event event);

  // Return true if double click
  static bool mouseDoubleClicked();

  // Return true if the object has been clicked and the mouse has dragged over the object
  static bool draggedover(T& object, sf::RenderWindow& WIFSIGNALED, sf::Event event);

  // Return true if the mouse is hovered over the object
  static bool hovered(T& object, sf::RenderWindow& window);

 private:
  static sf::Clock clock;
  static int clicks;
  static void countClicks(sf::Event event);
};

#include "MouseEvents.cpp"
#endif  // MOUSEEVENTS_H_