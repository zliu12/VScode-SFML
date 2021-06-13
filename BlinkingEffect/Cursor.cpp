/**
 * Cursor - Definitions
 *
 * Copyright (c) [2021], John Liu.
 */

#include "Cursor.h"

// Default constructor
Cursor::Cursor() {
  /* textBox */
  textBox.setSize({500, 250});
  textBox.setFillColor(sf::Color::Transparent);
  textBox.setOutlineColor(sf::Color::White);
  textBox.setOutlineThickness(5);
  textBox.setPosition(50, 50);

  /* cursor */
  cursor.setSize(sf::Vector2f(10, textBox.getSize().y * 0.75));
  cursor.setFillColor(sf::Color::White);
  cursor.setPosition(textBox.getPosition().x + 10, 
                     textBox.getPosition().y + textBox.getSize().y / 2 -
                     cursor.getGlobalBounds().height / 2);

  showCursor = false;
}

// Check if mouse rests inside the textBox
bool Cursor::hovered(sf::RectangleShape &box, sf::RenderWindow &window) {
  // Find the mouse position in the window
  sf::Vector2i mousePos = sf::Mouse::getPosition(window);

  // Check if the mouse is inside the box's area
  if (box.getGlobalBounds().contains(mousePos.x, mousePos.y)) {
    return true;
  }
  return false;
}

// Check if left-click the textBox
bool Cursor::clickBox(sf::RectangleShape box, sf::RenderWindow &window) {
  return sf::Mouse::isButtonPressed(sf::Mouse::Button::Left) &&
         hovered(box, window);
}

// Check if left-click the window
bool Cursor::clickWindow(sf::RenderWindow &window, sf::Event event) {
  if (event.type == event.MouseButtonPressed && event.mouseButton.button == sf::Mouse::Button::Left) {
    return true;
  }
  return false;
}

// Make cursor blink
void Cursor::blinkCursor() {
  if (clock.getElapsedTime().asSeconds() <= blinkInterval) {
    cursor.setFillColor(sf::Color::White);
    std::cout << "Cursor white" << std::endl;
  }
  else if (clock.getElapsedTime().asSeconds() < blinkInterval * 2 &&
           clock.getElapsedTime().asSeconds() > blinkInterval) {
    cursor.setFillColor(sf::Color::Blue);
    std::cout << "Cursor Blue" << std::endl;
    clock.restart();
  }
}

// Event handler
void Cursor::addEventHandler(sf::RenderWindow &window, sf::Event event) {
  if (clickBox(textBox, window)) {
    showCursor = true;
    std::cout << showCursor << std::endl;
  }
  else if (clickWindow(window, event)) {
    showCursor = false;
    std::cout << showCursor << std::endl;
  }
}

// Draw function
void Cursor::draw(sf::RenderTarget &window, sf::RenderStates state) const {
  window.draw(textBox);
  if (showCursor) {
    window.draw(cursor);
  }
}

// Update function
void Cursor::update() {
  if (clock.getElapsedTime().asSeconds() > blinkInterval) {
    cursor.setFillColor(sf::Color::Transparent);
  }
  if (clock.getElapsedTime().asSeconds() > blinkInterval * 2) {
    clock.restart();
    cursor.setFillColor(sf::Color::White);
  }
}