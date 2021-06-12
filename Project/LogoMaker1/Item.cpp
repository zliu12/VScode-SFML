//
// Created by QiChang Liu on 6/1/21.
//

#include "Item.h"
std::string Item::strClicked;

Item::Item() {
  /* itemBox */
  itemBox.setSize({500, 80});
  itemBox.setOutlineColor(itemOutlineColor);
  itemBox.setOutlineThickness(2);
  itemBox.setPosition(500, 500);

  /* itemTxt */
  itemTxt.setFont(Font::getFont());
  itemTxt.setCharacterSize(itemBox.getSize().y * 0.35);
  itemTxt.setFillColor(sf::Color::White);
  itemTxt.setString("item test");
  centerItemTxt();
}

void Item::setItemPos(float x, float y) {
  itemBox.setPosition(x + itemBox.getOutlineThickness(), y);
  centerItemTxt();
}

void Item::centerItemTxt() {
  float x = itemBox.getPosition().x + (itemBox.getSize().x - itemTxt.getGlobalBounds().width) / 2;
  float y = itemBox.getPosition().y + (itemBox.getSize().y - itemTxt.getCharacterSize()) / 2;
  itemTxt.setPosition(x, y);
}

void Item::setItemTxtStr(const std::string& itemStr) {
  itemTxt.setString(itemStr);
}

sf::Vector2f Item::getItemBoxSize() {
  return itemBox.getSize();
}

std::string Item::getStrClicked() {
  return strClicked;
}

void Item::draw(sf::RenderTarget &window, sf::RenderStates states) const {
  window.draw(itemBox);
  window.draw(itemTxt);
}

void Item::addEventHandler(sf::RenderWindow &window, sf::Event event) {
  // If mouse hovers over the itemBox
  if (MouseEvents<sf::RectangleShape>::hovered(itemBox, window)) {
    // itemBox fill color becomes blue
    itemBox.setFillColor(sf::Color::Blue);
  }
  else {
    itemBox.setFillColor(itemBgColor);
  }

  // If click one of the itemBox
  if (MouseEvents<sf::RectangleShape>::objClicked(itemBox, window)) {
    // Set strClicked to the itemTxt of the item clicked
    strClicked = itemTxt.getString();
    std::cout << "Item strClicked: " << getStrClicked() << std::endl;
  }

  // If click "Float Module ON"
  if (strClicked == "Float Module ON") {
    // Set floatMode to true
    States::floatMode = true;
    std::cout << "Item States::floatMode " << States::floatMode << std::endl;
  }
  // If click "Float Module OFF"
  else if (strClicked == "Float Module OFF") {
    // Set floatMode to false
    States::floatMode = false;
  }
  // If click "Reset Module         (Command+F1)"
  else if (strClicked == "Reset Module         (Command+F1)") {
    // Set floatMode to false
    States::floatMode = false;
    std::cout << "Item States::floatMode " << States::floatMode << std::endl;
  }
  // If resetPos() shortcut key is pressed
  else if (KeyBoardShortCuts::resetPos()) {
    // Set floatMode to false
    States::floatMode = false;
    std::cout << "Item resetPos()" << States::floatMode << std::endl;
  }
  // If click "New Project"
  else if (strClicked == "New Project") {
    States::newProject = true;
    std::cout << States::newProject << std::endl;
  }
  // If click "Open Project"
  else if (strClicked == "Open Project") {
//    PopWindow popWindow;
//    popWindow.winOpen();
    States::popWindow = true;
  }
  // If click "Quit"
  else if (strClicked == "Quit") {
    window.close();
  }

  // If click "Export Image"
  if (strClicked == "Export Image") {
    States::exportImage = true;
  }
  else if (MouseEvents<sf::Window>::winClicked(window, event)) {
    States::exportImage = false;
  }
}

void Item::update() {

}
