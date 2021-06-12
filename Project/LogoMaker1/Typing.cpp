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

void Typing::deleteChar() {
  str.erase(str.getSize() - 1, 1);
//  std::cout << "delete 1 char" << std::endl;
}

void Typing::deleteAllChars() {
  str.clear();
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
  // Receive and pass keyboard input to txt
  if (event.type == sf::Event::TextEntered) {
    if (event.text.unicode < 128 && event.text.unicode != 8) {
      str += event.text.unicode;
      txt.setString(str);
    }
  }

  if (Item::getStrClicked() == "Close Project") {
    deleteAllChars();
    txt.setString(str);
  }

  // Delete txt in different ways
  if (event.type == sf::Event::KeyPressed && !str.isEmpty()) {
    // Delete one character at the string end
    if (KeyBoardShortCuts::deleteOneChar()) {
      deleteChar();
      txt.setString(str);
    }

    // Delete all characters in the string
    if (KeyBoardShortCuts::deleteWholeLine()) {
      deleteAllChars();
      txt.setString(str);
    }
  }
}

void Typing::update() {

}
