/**
 * Bouncing - Header
 *
 * Copyright (c) [2021], John Liu.
 */

#ifndef BOUNCINGOBJECT_H_ 
#define BOUNCINGOBJECT_H_
#include <iostream>
#include "SFML/Graphics.hpp"


template<class T>
class BouncingObject : public sf::Drawable, public sf::Transformable {
  public:
    // Default constructor
    BouncingObject();

    // Circle shape constructor
    explicit BouncingObject(float radius);

    // Rectangle shape constructor
    BouncingObject(float width, float height);

    // Bounce function makes the object bounce
    void bounce(sf::RenderWindow &window);

    // Set object starting position
    void setObjectPos(float posX, float posY);

    // Draw function draws the window
    void draw(sf::RenderTarget &window, sf::RenderStates state) const override;

    // Move function makes the oject move
    void move(float x, float y);

  private:
    // Object
    T object;

    // Horizontal moving velocity
    float moveSpeedX;

    // Vertical moving velocity
    float moveSpeedY;
};

#include "BouncingObject.cpp"
#endif  // BOUNCINGOBJECT_H_