//
// Created by QiChang Liu on 6/2/21.
//

#include "InputBox.h"

InputBox::InputBox() {
  /* menuBox */
  menuBox.setSize({200, 80});
  menuBox.setFillColor(sf::Color::Transparent);
  menuBox.setOutlineThickness(2);
//  menuBox.setOutlineColor(menuBoxOutlineColor);
  menuBox.setOutlineColor(sf::Color::Transparent);

  /* menuName */
  menuName.setFont(Font::getFont());
  menuName.setCharacterSize(menuBox.getSize().y * 0.4);
  menuName.setFillColor(sf::Color::White);
  menuName.setString("Test");
  centerMenuName();
  clickAOption = false;
}

InputBox::InputBox(const std::string &name, sf::Vector2f pos) {
  /* menuBox */
  menuBox.setSize({400, 80});
  menuBox.setFillColor(sf::Color::Transparent);
  menuBox.setOutlineThickness(2);
//  menuBox.setOutlineColor(menuBoxOutlineColor);
  menuBox.setOutlineColor(sf::Color::Transparent);
  menuBox.setPosition(pos.x, pos.y);

  /* menuName */
  menuName.setFont(Font::getFont());
  menuName.setCharacterSize(menuBox.getSize().y * 0.5);
  menuName.setFillColor(sf::Color::White);
  menuName.setString(name);
  centerMenuName();
  clickAOption = false;
}

void InputBox::centerMenuName() {
  float x = menuBox.getPosition().x + (menuBox.getSize().x - menuName.getGlobalBounds().width) / 2;
  float y = menuBox.getPosition().y + (menuBox.getSize().y - menuName.getCharacterSize()) / 2;
  menuName.setPosition(x, y);
}

sf::FloatRect InputBox::getGlobalBounds() {
  return menuBox.getGlobalBounds();
}

void InputBox::draw(sf::RenderTarget &window, sf::RenderStates states) const {
  window.draw(menuBox);
  window.draw(menuName);
}

void InputBox::addEventHandler(sf::RenderWindow &window, sf::Event event) {
  if (MouseEvents<sf::RectangleShape>::objClicked(menuBox, window)) {
    clickAOption = true;
  }
  else if (MouseEvents<sf::Window>::winClicked(window, event)) {
    clickAOption = false;
  }
}

void InputBox::update() {
  if (clickAOption) {
    menuBox.setFillColor(menuBoxSelectedColor);
  }
  else {
    menuBox.setFillColor(sf::Color::Transparent);
  }
}
