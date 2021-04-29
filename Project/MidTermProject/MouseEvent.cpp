/**
 * Project 1 - Mouse Event Implementation
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#ifndef MOUSEEVENT_CPP_
#define MOUSEEVENT_CPP_
#include "MouseEvent.h"
#include <iostream>

template <class T>
void MouseEvents<T>::countClicks(sf::Event event) {
  while (clock.getElapsedTime().asMilliseconds() < 1001) {
    if (event.type == event.MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left) {
      clicks++;
    }
  }
}

// Return true if the mouse clicks on the object
template <class T>
bool MouseEvents<T>::mouseClicked(T& object, sf::RenderWindow& window) {
  return (sf::Mouse::isButtonPressed(sf::Mouse::Left)) && hovered(object, window);
}

// Return true if the mouse clicks anywhere in the window
template <class T>
bool MouseEvents<T>::mouseClicked(sf::RenderWindow& window, sf::Event event) {
  if (event.type == event.MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left) {
    return true;
  }
  return false;
}

// Return true if the mouse has been double clicked
template <class T>
bool MouseEvents<T>::mouseDoubleClicked() {
  return clicks == 2;
}

// Return true if the object has been clicked and the mouse has dragged over the object
template <class T>
bool MouseEvents<T>::draggedOver(T& object, sf::RenderWindow& window, sf::Event event) {
  if (mouseClicked(object, window)) {
    while (event.type != event.MouseButtonReleased) {
      if (event.type == event.MouseMoved) {
        return true;
      }
    }
  }
  return false;
}

// Return true if the mouse is hovered over the object
template <class T>
bool MouseEvents<T>::hovered(T& object, sf::RenderWindow& window) {
  sf::Vector2i mousePos = sf::Mouse::getPosition(window);
  std::cout << mousePos.x << " " << std::cout << mousePos.y << std::endl;
  if (object.getGlobalBounds().contains(mousePos.x, mousePos.y)) {
    return true;
  }
  return false;
}

#endif  // MOUSEEVENT_CPP_