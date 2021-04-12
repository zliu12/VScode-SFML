/**
 * Project 1 - Cursor Implementation
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#include "Cursor.h"

// Default constructor
Cursor::Cursor() {
  setCursorSize(25, 200);
  setCursorColor(sf::Color::White);
  isClicked = false;
}

// Set cursor size
void Cursor::setCursorSize(float x, float y) {
  cursor.setSize(sf::Vector2f(x, y));
}

// Set cursor position
void Cursor::setCursorPos(float x, float y) {
  cursor.setPosition(sf::Vector2f(x, y));
}

// Set cursor color
void Cursor::setCursorColor(sf::Color color) {
  cursor.setFillColor(color);
}

// Get cursor width
float Cursor::getCursorWidth() {
  return cursor.getSize().x;
}

// Get cursor height
float Cursor::getCursorHeight() {
  return cursor.getSize().y;
}

// Check for the time elapsed and reset the clock
void Cursor::checkAndReset() {
  if (cursorClock.getElapsedTime() > sf::milliseconds(500)) {
    setCursorColor(sf::Color::Black); 
  }
  if (cursorClock.getElapsedTime() > sf::milliseconds(1000)) {
    setCursorColor(sf::Color::White);
    cursorClock.restart();
  }
}

// From the sf::Drawable class
void Cursor::draw(sf::RenderTarget& window, sf::RenderStates states) const {
  window.draw(cursor);
}

// From EventHandler
void Cursor::addEventHandler(sf::RenderWindow& window, sf::Event event) {
  
}

void Cursor::update() {
  checkAndReset();
}

// From SnapshotInterface
Snapshot& Cursor::getSnapshot() {}
void Cursor::applySnapshot(const Snapshot& snapshot) {}