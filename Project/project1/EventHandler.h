/**
 * Project 1 - GUI Component - Event Handler Header
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#ifndef EVENTHANDLER_H_
#define EVENTHANDLER_H_
#include "SFML/Graphics.hpp"

class EventHandler {
 public:
  virtual void addEventHandler(sf::RenderWindow& window, sf::Event event) = 0;
  virtual void update() = 0;
};

#endif  // EVENTHANDLER_H_