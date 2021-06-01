//
// Created by QiChang Liu on 5/28/21.
//

#ifndef LOGOMAKER_MOUSEEVENTS_CPP
#define LOGOMAKER_MOUSEEVENTS_CPP
#include "MouseEvents.h"

template<class T>
bool MouseEvents<T>::objClicked(T &object, sf::RenderWindow &window) {
    return sf::Mouse::isButtonPressed(sf::Mouse::Button::Left) && hovered(object, window);
}

template<class T>
bool MouseEvents<T>::winClicked(sf::RenderWindow &window, sf::Event event) {
    if (event.type == event.MouseButtonPressed && event.mouseButton.button == sf::Mouse::Button::Left) {
        return true;
    }
    return false;
}

template<class T>
bool MouseEvents<T>::mouseDoubleClicked() {
    return clicks == 2;
}

template<class T>
bool MouseEvents<T>::draggedOver(T &object, sf::RenderWindow &window, sf::Event event) {
    if (objClicked(object, window)) {
        while (event.type == event.MouseButtonPressed) {
            return true;
        }
    }
    return false;
}

template<class T>
bool MouseEvents<T>::hovered(T &object, sf::RenderWindow &window) {
    sf::Vector2i mousePos = sf::Mouse::getPosition(window);
    if(object.getGlobalBounds().contains(mousePos.x, mousePos.y)) {
        return true;
    }
    return false;
}

template<class T>
void MouseEvents<T>::countClicks(sf::Event event) {
    while (clock.getElapsedTime().asMilliseconds() < 1001) {
        if (event.type == event.MouseButtonPressed && event.mouseButton.button == sf::Mouse::Button::Left) {
            clicks++;
            clock.restart();
        }
    }
}

template<class T>
sf::Vector2i MouseEvents<T>::getMousePos(sf::RenderWindow& window) {
    return sf::Mouse::getPosition();
}

template<class T>
bool MouseEvents<T>::reachWindowBound(sf::RenderWindow& window, T& object) {
  if ((object.getPosition().x + object.getSize().x) < window.getSize().x &&
      (object.getPosition().y + object.getSize().y) < window.getSize().y) {
    std::cout << "reach" << std::endl;
    return false;
  }
  return true;
}



#endif //LOGOMAKER_MOUSEEVENTS_CPP