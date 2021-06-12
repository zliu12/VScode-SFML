//
// Created by QiChang Liu on 5/30/21.
//

#include "KeyBoardShortCuts.h"

//
bool KeyBoardShortCuts::resetPos() {
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::LSystem) && sf::Keyboard::isKeyPressed(sf::Keyboard::F1)) {
    return true;
  }
  else if (sf::Keyboard::isKeyPressed(sf::Keyboard::RSystem) && sf::Keyboard::isKeyPressed(sf::Keyboard::F1)) {
    return true;
  }
  else if (sf::Keyboard::isKeyPressed(sf::Keyboard::LControl) && sf::Keyboard::isKeyPressed(sf::Keyboard::F1)) {
    return true;
  }
  else if (sf::Keyboard::isKeyPressed(sf::Keyboard::RControl) && sf::Keyboard::isKeyPressed(sf::Keyboard::F1)) {
    return true;
  }
  return false;
}

bool KeyBoardShortCuts::deleteWholeLine() {
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::LSystem) && sf::Keyboard::isKeyPressed(sf::Keyboard::Backspace)) {
    std::cout << "delete whole line" << std::endl;
    return true;
  }
  else if (sf::Keyboard::isKeyPressed(sf::Keyboard::RSystem) && sf::Keyboard::isKeyPressed(sf::Keyboard::Backspace)) {
    return true;
  }
  else if (sf::Keyboard::isKeyPressed(sf::Keyboard::LControl) && sf::Keyboard::isKeyPressed(sf::Keyboard::Backspace)) {
    return true;
  }
  else if (sf::Keyboard::isKeyPressed(sf::Keyboard::RControl) && sf::Keyboard::isKeyPressed(sf::Keyboard::Backspace)) {
    return true;
  }
  return false;
}

bool KeyBoardShortCuts::deleteOneChar() {
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Backspace)) {
    return true;
  }
  return false;
}

