/**
 * Bouncing Definitions
 *
 * Copyright (c) [2021], John Liu.
 */

#ifndef BOUNCING_CPP_
#define BOUNCING_CPP_
#include "BouncingObject.h"

// Default constructor
template<class T>
BouncingObject<T>::BouncingObject() {
  
}

// Circle shape constructor
template<class T>
BouncingObject<T>::BouncingObject(float r) {
  object.setRadius(r);                          // Set circle radius
  object.setFillColor(sf::Color::Yellow);       // Object color
  moveSpeedX = -5.0;                            // Horizontal moving velocity
  moveSpeedY = -5.0;                            // Vertical moving velocity
}

// Rectangle shape constructor
template<class T>
BouncingObject<T>::BouncingObject(float width, float height) {
  object.setSize(sf::Vector2f(width, height));    // For rectangle size
  object.setFillColor(sf::Color::Yellow);         // Object color
  object.setPosition(1450, 0);                    // Starting position
  moveSpeedX = 5.0;                               // Horizontal moving velocity
  moveSpeedY = 5.0;                               // Vertical moving velocity
}

// Bounce function makes the object bounce
template<class T>
void BouncingObject<T>::bounce(sf::RenderWindow &window) {
  // If object reaches the right window edge
  if (object.getPosition().x + object.getGlobalBounds().width > window.getSize().x) {
    moveSpeedX *= -1;
  }

  // If object reaches the left window edge
  if (object.getPosition().x < 0) {
    moveSpeedX *= -1;
  }

  // If object reaches the top window edge
  if (object.getPosition().y < 0) {
    moveSpeedY *= -1;
  }

  // If object reaches the bottom window edge
  if (object.getPosition().y + object.getGlobalBounds().height > window.getSize().y) {
    moveSpeedY *= -1;
  }

  object.move(moveSpeedX, moveSpeedY);
}

// Set object starting position
template<class T>
void BouncingObject<T>::setObjectPos(float posX, float posY) {
  object.setPosition(posX, posY);
}
// Draw function draws the window
template<class T>
void BouncingObject<T>::draw(sf::RenderTarget &window, sf::RenderStates state) const {
  window.draw(object);
}

// Move function makes the oject move
template<class T>
void BouncingObject<T>::move(float x, float y) {
  object.move(x, y);
}

#endif  // BOUNCING_CPP_