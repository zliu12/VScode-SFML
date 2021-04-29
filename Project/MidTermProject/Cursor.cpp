/**
 * Project 1 - Cursor Implementation
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#include "Cursor.h"
#include <iostream>
// Default constructor
Cursor::Cursor() {

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

void Cursor::blinking() {
  if (States::checkIfStateEnabled(States::CURSORBLINKING)) {
    // Disable (false) CURSORBLINKING if true
    States::disableState(States::CURSORBLINKING);
  }
  else {
    // Enable (true) CURSORBLINKING if false
    States::enableState(CURSORBLINKING);
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
  // cursorClock time interval is 0.4s
  if (cursorClock.getElapsedTime() > sf::seconds(blinkTimeInterval)) {
    // cursor is transparent when CURSORBLINKING is true
    if (States::checkIfStateEnabled(CURSORBLINKING)) {
      cursor.setFillColor(sf::Color::Transparent);
    }
    // cursor is while when CURSORBLINKING is false
    else {
      cursor.setFillColor(sf::Color::White);
    }

    // Reset the cursorClock to 0 and switch the state of CURSORBLINKING
    cursorClock.restart();
    blinking();
  }
}

// From SnapshotInterface
Snapshot& Cursor::getSnapshot() {}
void Cursor::applySnapshot(const Snapshot& snapshot) {}