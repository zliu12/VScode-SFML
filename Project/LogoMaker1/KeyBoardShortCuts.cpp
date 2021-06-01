//
// Created by QiChang Liu on 5/30/21.
//

#include "KeyBoardShortCuts.h"

bool KeyBoardShortCuts::resetPos() {
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
