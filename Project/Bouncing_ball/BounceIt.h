/**
 * Bounce Header File
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#ifndef BOUNCEIT_H_
#define BOUNCEIT_H_
#include <iostream>
#include <SFML/Graphics.hpp>

// class BounceAnObject publicly inherits from sf::Drawable and sf::Transfromable
template<class T>
class BounceAnObject : public sf::Drawable, public sf::Transformable {
 public:
  // Default constructor
  BounceAnObject();

  // bounce function makes the object bounce
  void bounce(sf::RenderWindow &window);

  // draw function draws the window
  virtual void draw(sf::RenderTarget &window, sf::RenderStates state) const;

  // move function makes the object move
  void move(float x, float y);

 private:
  T circle;     // Object circle
  float x_move_speed;         // Velocity on X-axis
  float y_move_speed;         // Velocity on Y-axis
};

#include "BounceIt.cpp"
#endif  // BOUNCEIT_H_