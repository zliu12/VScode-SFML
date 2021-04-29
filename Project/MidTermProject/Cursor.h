/**
 * Project 1 - Cursor Header
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#ifndef CURSOR_H_
#define CURSOR_H_
#include "SFML/Graphics.hpp"
#include "guiComponent.h"
#include <string>

class Cursor : public GuiComponent{
 private:
  sf::RectangleShape cursor;
  sf::Clock cursorClock;
  float blinkTimeInterval = 0.4;

 public:
  // Default constructor
  Cursor();
  
  // Set cursor size
  void setCursorSize(float x, float y);

  // Set cursor position
  void setCursorPos(float x, float y);

  // Set cursor color
  void setCursorColor(sf::Color color);

  // Get cursor width
  float getCursorWidth();

  // Get cursor height
  float getCursorHeight();

  // Check and switch the CURSORBLINKING (ObjectState)
  void blinking();
  
  // From the sf::Drawable class
  virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;

  // From EventHandler
  virtual void addEventHandler(sf::RenderWindow& window, sf::Event event);
  virtual void update();

  // From SnapshotInterface
  virtual Snapshot& getSnapshot();
  virtual void applySnapshot(const Snapshot& snapshot);
};

#endif  // CURSOR_H_