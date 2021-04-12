/**
 * Project 1 - Key Board Short Cut Undo Implementation
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#include "KeyBoardShortCutUndo.h"

bool Undo::isUndo() {
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::LSystem) && sf::Keyboard::isKeyPressed(sf::Keyboard::Z)) {
    return true;
  } 
  else if (sf::Keyboard::isKeyPressed(sf::Keyboard::RSystem) && sf::Keyboard::isKeyPressed(sf::Keyboard::Z)) {
    return true;
  }
  else if (sf::Keyboard::isKeyPressed(sf::Keyboard::LControl) && sf::Keyboard::isKeyPressed(sf::Keyboard::Z)) {
    return true;
  }
  else if (sf::Keyboard::isKeyPressed(sf::Keyboard::RControl) && sf::Keyboard::isKeyPressed(sf::Keyboard::Z)) {
    return true;
  }
  return false;
}

// From the sf::Drawable class
void Undo::draw(sf::RenderTarget& window, sf::RenderStates states) const {

}

// From EventHandler
void Undo::addEventHandler(sf::RenderWindow& window, sf::Event event) {

}

void Undo::update() {

}

// From SnapshotInterface
Snapshot& Undo::getSnapshot() {

}

void Undo::applySnapshot(const Snapshot& snapshot) {

}