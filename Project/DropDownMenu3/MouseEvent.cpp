#ifndef MOUSEEVENT_CPP_
#define MOUSEEVENT_CPP_
#include "MouseEvent.h"

// Return true if mouse clicks on the object
template<class T>
bool MouseEvent<T>::mouseClicked(T& object, sf::RenderWindow& window) {
  return sf::Mouse::isButtonPressed(sf::Mouse::Left) && hovered(object, window);
}

// Return true if mouse clicks on the window
template<class T>
bool MouseEvent<T>::mouseClicked(sf::RenderWindow& window, sf::Event event) {
  if (event.type == event.MouseButtonPressed && event.mouseButton.button == sf::Mouse::Button::Left) {
    return true;
  }
  return false;
}

// Return true if double clicked
template<class T>
bool MouseEvent<T>::mouseDoubleClicked() {
  return clicks == 2;
}

// Return true if the object has been clicked and the mouse has dragged over the object
template<class T>
bool MouseEvent<T>::draggedOver(T& object, sf::RenderWindow& window, sf::Event event) {
  if (mouseClicked(object, window)) {
    while (event.type != event.MouseButtonReleased) {
      if (event.type == event.MouseMoved) {
        return true;
      }
    }
  }
  return false;
}

// Return true if mouse is hovered over the object
template<class T>
bool MouseEvent<T>::hovered(T& object, sf::RenderWindow& window) {
  sf::Vector2i mouseWinPos = sf::Mouse::getPosition(window);
  if (object.getGlobalBounds().contains(mouseWinPos.x, mouseWinPos.y)) {
    return true;
  }
  return false;
}

template<class T>
void MouseEvent<T>::countClicks(sf::Event event) {
  while (clock.getElapsedTime().asMicroseconds() < 1001) {
    if (event.type == event.MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left) {
      clicks++;
    }
  }
}



#endif  // MOUSEEVENT_CPP_