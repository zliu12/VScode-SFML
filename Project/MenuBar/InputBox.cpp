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

/* Input box/txt position */
void InputBox::setInputBoxPos(float x, float y) {
  inputBox.setPosition(sf::Vector2f(x, y));
}
void InputBox::setInputBoxTxtPos(float x, float y) {
  inputBoxTxt.setPosition(sf::Vector2f(x, y));
}

void InputBox::setInputBoxTxt(sf::String newStr) {
  inputBoxTxt.setString(newStr);
}

void InputBox::draw(sf::RenderTarget& window, sf::RenderStates states) const {
  window.draw(inputBox);
  window.draw(inputBoxTxt);
}

void InputBox::addEventHandler(sf::RenderWindow& window, sf::Event event) {
  // If click inputBox
  if (MouseEvent<sf::RectangleShape>::mouseClicked(inputBox, window)) {
    // ITEMAPPEARED true
    States::enableState(States::ITEMAPPEARED);    
    // INPUTBOXBGCOLOR true  
    StatesInputBox::enableInputBoxState(StatesInputBox::INPUTBOXBGCOLOR);

    // Debugging
    std::cout << "ITEMAPPEARED: " << States::stateEnabled(States::ITEMAPPEARED) << std::endl;
    std::cout << "INPUTBOXBGCOLOR: " << StatesInputBox::inputBoxStateEnabled(StatesInputBox::INPUTBOXBGCOLOR) << std::endl;
  }
  // If click other window areas
  else if (MouseEvent<sf::Window>::mouseClicked(window, event)) {
    // ITEMAPPEARED false
    Item::States::disableState(Item::States::ITEMAPPEARED);
    // INPUTBOXBGCOLOR false
    StatesInputBox::disableInputBoxState(StatesInputBox::INPUTBOXBGCOLOR);

    // Debugging
    std::cout << "ITEMAPPEARED: " << States::stateEnabled(States::ITEMAPPEARED) << std::endl;
    std::cout << "INPUTBOXBGCOLOR: " << StatesInputBox::inputBoxStateEnabled(StatesInputBox::INPUTBOXBGCOLOR) << std::endl;
  }
}

void InputBox::update() {
  // INPUTBOXBGCOLOR true  
  if (StatesInputBox::inputBoxStateEnabled(StatesInputBox::INPUTBOXBGCOLOR)) {
    // inputBox blue
    inputBox.setFillColor(sf::Color::Blue);         
  }
  // INPUTBOXBGCOLOR false 
  else {
    // inputBox transparent
    inputBox.setFillColor(sf::Color::Transparent);  
  }
}

Snapshot& InputBox::getSnapshot() {

}

void InputBox::applySnapshot(const Snapshot& snapshot) {

}