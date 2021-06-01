//
// Created by QiChang Liu on 5/29/21.
//

#include "Typing.h"
#define DELETE_KEY 8

Typing::Typing() {
  txt.setFont(Font::getFont());
  txt.setCharacterSize(100);
  txt.setFillColor(sf::Color::White);
}

void Typing::deleteChar(sf::RenderWindow&, sf::Event event) {
  str.erase(str.getSize() - 1);
}

sf::String Typing::getTxt() {
  return txt.getString();
}


void Typing::setTxtPos(float x, float y) {
  txt.setPosition(x, y);
}

void Typing::setTxtSize(unsigned int size) {
  txt.setCharacterSize(size);
}


void Typing::draw(sf::RenderTarget &window, sf::RenderStates states) const {
  window.draw(txt);
}

void Typing::addEventHandler(sf::RenderWindow &window, sf::Event event) {
  if (event.type == sf::Event::TextEntered) {
    if (event.text.unicode < 128 && event.text.unicode != 8) {
      str += event.text.unicode;
      txt.setString(str);
    }
    else if (event.text.unicode == 8 && !str.isEmpty()) {
      deleteChar(window, event);
      txt.setString(str);
    }
  }
}

void Typing::update() {

}
