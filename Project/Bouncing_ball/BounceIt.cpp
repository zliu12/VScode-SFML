/**
 * Bouncer Implementation File
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#ifndef BOUNCEIT_CPP_
#define BOUNCEIT_CPP_
#include "BounceIt.h"

template<class T>
BounceAnObject<T>::BounceAnObject() {
  circle.setRadius(50.0);
  circle.setFillColor(sf::Color::Blue);
  x_move_speed = 5.0;
  y_move_speed = 5.0;
}

template <class T>
void BounceAnObject<T>::bounce(sf::RenderWindow &window) {
  // if the object position on X-axis plus the object width is greater than the
  // width of the window (reach right edge of the window)
  if (circle.getPosition().x + circle.getRadius() * 2 > window.getSize().x) {
    // Object moves the opposite direction on the X-axis
    x_move_speed *= -1;
  }

  // if the object position on X-axis is smaller than 0 (reach left edge of the
  // window)
  if (circle.getPosition().x < 0) {
    // Object moves the opposite direction on the X-axis
    x_move_speed *= -1;
  }

  // if the object position on Y-axis plus the object width is greater than the
  // height of the window (reach bottom edge of the window)
  if (circle.getPosition().y + circle.getRadius() * 2 > window.getSize().y) {
    // Object moves the opposite direction on the X-axis
    y_move_speed *= -1;
  }

  // if the object position on Y-axis is smaller than 0 (reach top edge of the
  // window)
  if (circle.getPosition().y < 0) {
    // Object moves the opposite direction on the X-axis
    y_move_speed *= -1;
  }

  // Call move function
  circle.move(x_move_speed, y_move_speed);
}

template <class T>
void BounceAnObject<T>::draw(sf::RenderTarget &window, sf::RenderStates state) const {
  window.draw(circle);
}

template <class T>
void BounceAnObject<T>::move(float x, float y) {
  circle.move(x, y);
}

#endif  // BOUNCEIT_CPP_