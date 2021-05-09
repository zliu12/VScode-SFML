/**
 * InputBox - Implementation
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#include "InputBox.h"

InputBox::InputBox() {
  /* inputBox */
  inputBox.setSize(sf::Vector2f(500, 200));
  inputBox.setOutlineThickness(5);
  inputBox.setOutlineColor(sf::Color::White);
  inputBox.setPosition(sf::Vector2f(500, 100));

  /* inputBoxTxt */
  inputBoxTxt.setFont(ProjectFont::getFont());
  inputBoxTxt.setCharacterSize(inputBox.getGlobalBounds().height * 0.50);
  inputBoxTxt.setFillColor(sf::Color::White);
  inputBoxTxt.setString("Menu 1");
  inputBoxCenterTxt();
}

void InputBox::inputBoxCenterTxt() {
  float inputBoxTxtX = inputBox.getPosition().x + (inputBox.getGlobalBounds().width - inputBoxTxt.getGlobalBounds().width) / 2;
  float inputBoxTxtY = inputBox.getPosition().y + (inputBox.getGlobalBounds().height - inputBoxTxt.getGlobalBounds().height) / 2;
  inputBoxTxt.setPosition(sf::Vector2f(inputBoxTxtX, inputBoxTxtY));
}

void InputBox::modifyInputBoxTxt(sf::String newStr) {
  inputBoxTxt.setString(newStr);
}

void InputBox::draw(sf::RenderTarget& window, sf::RenderStates states) const {
  window.draw(inputBox);
  window.draw(inputBoxTxt);
  window.draw(itemList);
}

void InputBox::addEventHandler(sf::RenderWindow& window, sf::Event event) {
  // If click inputBox
  if (MouseEvent<sf::RectangleShape>::mouseClicked(inputBox, window)) {
    States::enableState(States::ITEMAPPEARED);      // ITEMAPPEARED true
    States::enableState(States::BGCOLOR);           // BGCOLOR true
    std::cout << "ITEMAPPEARED: " << States::stateEnabled(States::ITEMAPPEARED) << std::endl;
    std::cout << "BGCOLOR: " << States::stateEnabled(States::BGCOLOR) << std::endl;
  }
  // If click other window areas
  else if (MouseEvent<sf::Window>::mouseClicked(window, event)) {
    Item::States::disableState(Item::States::ITEMAPPEARED);     // ITEMAPPEARED false
    Item::States::disableState(Item::States::BGCOLOR);          // BGCOLOR false
    std::cout << "ITEMAPPEARED: " << States::stateEnabled(States::ITEMAPPEARED) << std::endl;
    std::cout << "BGCOLOR: " << States::stateEnabled(States::BGCOLOR) << std::endl;
  }
}

void InputBox::update() {
  if (States::stateEnabled(States::BGCOLOR)) {      // BGCOLOR true
    inputBox.setFillColor(sf::Color::Blue);         // inputBox blue
  }
  else {                                            // BGCOLOR false
    inputBox.setFillColor(sf::Color::Transparent);  // inputBox transparent
  }
}

Snapshot& InputBox::getSnapshot() {

}

void InputBox::applySnapshot(const Snapshot& snapshot) {

}