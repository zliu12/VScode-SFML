/**
 * MouseEvents - Implementation
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#ifndef MOUSEEVENTS_CPP_
#define MOUSEEVENTS_CPP_
#include "MouseEvents.h"

// Return true if the mouse clicks on the object
template<class T>
bool MouseEvents<T>::mouseClicked(T& object, sf::RenderWindow& window) {
  return (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left) && hovered(object, window));
}

// Return true if the mouse clicks anywhere in the window
template<class T>
bool MouseEvents<T>::mouseClicked(sf::RenderWindow& window, sf::Event event) {
  if (event.type == event.MouseButtonPressed && event.mouseButton.button == sf::Mouse::Button::Left) {
    return true;
  }
  return false;
}

// Return true if double click
template<class T>
bool MouseEvents<T>::mouseDoubleClicked() {
  return clicks == 2;
}

// Return true if the object has been clicked and the mouse has dragged over the object
template<class T>
bool MouseEvents<T>::draggedover(T& object, sf::RenderWindow& window, sf::Event event) {
  if (mouseClicked(object, window)) {
    while (event.type == event.MouseButtonPressed && event.type != event.MouseButtonReleased) {
      if (event.type == event.MouseMoved) {
        return true;
      }
    }
  }
  return false;
}

// Return true if the mouse is hovered over the object
template<class T>
bool MouseEvents<T>::hovered(T& object, sf::RenderWindow& window) {
  sf::Vector2i mousePos = sf::Mouse::getPosition(window);
  if ((object.getGlobalBounds()).contains(mousePos.x, mousePos.y)) {
    return true;
  }
  return false;
}

template<class T>
void MouseEvents<T>::countClicks(sf::Event event) {
  while (clock.getElapsedTime().asMilliseconds() < 1001) {
    if (event.type == event.MouseButtonPressed && event.mouseButton.button == sf::Mouse::Button::Left) {
      clicks++;
      clock.restart();
    }
  }
}

#endif  // MOUSEEVENTS_CPP_