/**
 * Cursor - Definitions
 *
 * Copyright (c) [2021], John Liu.
 */

#include "Cursor.h"

// Default constructor
Cursor::Cursor() {
  cursor.setFillColor(sf::Color::White);
}

// Check if mouse pauses inside the input box
bool Cursor::hovered(sf::RectangleShape &box, sf::RenderWindow &window) {
  sf::Vector2i mousePos = sf::Mouse::getPosition(window);
  if (box.getGlobalBounds().contains(mousePos.x, mousePos.y)) {
    return true;
  }
  return false;
}

// Check if left-click the input box
bool Cursor::clickBox(sf::RectangleShape &box, sf::RenderWindow &window) {
  return sf::Mouse::isButtonPressed(sf::Mouse::Button::Left) &&
         hovered(box, window);
}

// Check if left-click other window area
bool Cursor::clickWindow(sf::RenderWindow &window, sf::Event event) {
  if (event.type == event.MouseButtonReleased && event.mouseButton.button == sf::Mouse::Button::Left) {
    return true;
  }
  return false;
}

// Make cursor blink
void Cursor::blinkCursor() {
  if (clock.getElapsedTime().asSeconds() > timeInterval) {
    cursor.setFillColor(sf::Color::White);
  }

  if (clock.getElapsedTime().asSeconds() > timeInterval * 2) {
    cursor.setFillColor(sf::Color::Transparent);
  }
}

// Set cursor position
void Cursor::setCursorPosition(float x, float y) {
  cursor.setPosition({x, y});
}

// Set cursor size
void Cursor::setCursorSize(float x, float y) {
  cursor.setSize({x, y});
}

// Event handler
void Cursor::addEventHandler(sf::RenderWindow &window, sf::Event event) {

}

// Virtual draw function
void Cursor::draw(sf::RenderTarget &window, sf::RenderStates state) const {
  window.draw(cursor);
} 

// Update function
void Cursor::update() {
  blinkCursor();
}