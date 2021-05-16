/**
 * InputBox - Implementation
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#include "InputBox.h"

bool InputBox::showList;
void InputBox::enableShowList() {
  showList = true;
}
void InputBox::disableShowList() {
  showList = false;
}
bool InputBox::getShowList() {
  return showList;
}

// // Set newTxt true
// void InputBox::setNewTxtTrue() {
//   newTxt = true;
// }

// // Set newTxt false
// void InputBox::setNewTxtFalse() {
//   newTxt = false;
// }

// // Get newTxt
// bool InputBox::getNewTxt() {
//   return newTxt;
// }

// Set inputTxt
void InputBox::setInputTxt(std::string str) {
  inputTxt.setString(str);
}

// Default constructor
InputBox::InputBox() {
  /* inputBox */
  inputBox.setSize(sf::Vector2f(400, 150));
  inputBox.setFillColor(sf::Color::Transparent);
  inputBox.setOutlineThickness(5);
  inputBox.setOutlineColor(sf::Color::White);
  inputBox.setPosition(100, 95);

  /* inputTxt */
  inputTxt.setFont(ProjectFont::getFont());
  inputTxt.setCharacterSize(100);
  inputTxt.setFillColor(sf::Color::White);
  inputTxt.setString("Input");
  centerInputTxt();

  disableShowList();
  // setNewTxtFalse();
}

// Customized constructor
InputBox::InputBox(sf::String inputStr) {
   /* inputBox */
  inputBox.setSize(sf::Vector2f(400, 150));
  inputBox.setFillColor(sf::Color::Transparent);
  inputBox.setOutlineThickness(5);
  inputBox.setOutlineColor(sf::Color::White);
  inputBox.setPosition(100, 95);

  /* inputTxt */
  inputTxt.setFont(ProjectFont::getFont());
  inputTxt.setCharacterSize(100);
  inputTxt.setFillColor(sf::Color::White);
  inputTxt.setString(inputStr);
  centerInputTxt();
}

// Set inputTxt in the center of the inputBox
void InputBox::centerInputTxt() {
  float txtPosX = inputBox.getGlobalBounds().width / 2 - 
                  inputTxt.getLocalBounds().width / 2 + 
                  inputBox.getPosition().x -
                  inputBox.getOutlineThickness() * 2;

  float txtPosY = inputBox.getGlobalBounds().height / 2 - 
                  inputTxt.getLocalBounds().height / 2 +  
                  inputBox.getPosition().y -
                  inputBox.getOutlineThickness() * 6;

  inputTxt.setPosition(txtPosX, txtPosY);
}

// From sf::Drawable
void InputBox::draw(sf::RenderTarget& window, sf::RenderStates states) const {
  window.draw(inputBox);
  window.draw(inputTxt);
}

// From EventHandler
void InputBox::addEventHandler(sf::RenderWindow& window, sf::Event event) {
  if (MouseEvents<sf::RectangleShape>::mouseClicked(inputBox, window)) {
    inputBox.setFillColor(sf::Color::Blue);
    States::enableState(States::HIGHLIGHTED);
    States::enableState(States::DISPLAYON);
    enableShowList();
    // setNewTxtTrue();
    // std::cout << States::isEnabled(States::HIGHLIGHTED) << std::endl;
    // std::cout << States::isEnabled(States::DISPLAYON) << std::endl;
    // std::cout << getNewTxt() << std::endl;
  }
  else if (MouseEvents<sf::Window>::mouseClicked(window, event)) {
    inputBox.setFillColor(sf::Color::Transparent);
    States::disableState(States::HIGHLIGHTED);
    States::disableState(States::DISPLAYON);
    disableShowList();
    // setNewTxtFalse();
    // std::cout << States::isEnabled(States::HIGHLIGHTED) << std::endl;
    // std::cout << States::isEnabled(States::DISPLAYON) << std::endl;
    // std::cout << getNewTxt() << std::endl;
  }
}
void InputBox::update() {
  // if (States::isEnabled(States::HIGHLIGHTED)) {
    // inputBox.setFillColor(sf::Color::Blue);
  // }
  // else {
    // inputBox.setFillColor(sf::Color::Transparent);
  // }
}
