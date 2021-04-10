/**
 * Project 1 - Mouse Event Implementation
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#ifndef MOUSEEVENT_CPP_
#define MOUSEEVENT_CPP_
#include "MouseEvent.h"

// Return true if the mouse clicks on the object
template <class T>
bool MouseEvents<T>::mouseClicked(T& object, sf::RenderWindow& window) {
  
}

// Return true if the mouse clicks anywhere in the window
template <class T>
bool MouseEvents<T>::mouseClicked(sf::RenderWindow& window, sf::Event event) {

}

// Return true if the mouse has been double clicked
template <class T>
bool MouseEvents<T>::mouseDoubleClicked() {

}

// Return true if the object has been clicked and the mouse has dragged over the object
template <class T>
bool MouseEvents<T>::draggedOver(T& object, sf::RenderWindow& window, sf::Event event) {

}

// Return true if the mouse is hovered over the object
template <class T>
bool MouseEvents<T>::hovered(T& object, sf::RenderWindow& window) {

}

#endif  // MOUSEEVENT_CPP_