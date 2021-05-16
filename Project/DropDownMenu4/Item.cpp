/**
 * Item - Implementation
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#include "Item.h"

// get txtSelect
std::string Item::getTxtSelect() {
  return txtSelect;
}

// Set ifSelect true
void Item::setIfSelectTrue() {
  ifSelect = true;
}

// Set ifSelect false
void Item::setIfSelectFalse() {
  ifSelect = false;
}

// Get ifSelect
bool Item::getIfSelect() {
  return ifSelect;
}

// Default constructor
Item::Item() {
  /* itemBox */
  itemBox.setSize(sf::Vector2f(400, 150));
  itemBox.setFillColor(sf::Color::Transparent);
  itemBox.setOutlineThickness(5);
  itemBox.setOutlineColor(sf::Color::White);
  itemBox.setPosition(100, 100);
  // itemBox.setOrigin(itemBox.getOutlineThickness() * -1, itemBox.getOutlineThickness() * -1);

  /* itemTxt */
  itemTxt.setFont(ProjectFont::getFont());
  itemTxt.setCharacterSize(100);
  itemTxt.setFillColor(sf::Color::White);
  itemTxt.setString("TEST");
  // itemTxt.setPosition(itemBox.getPosition().x, itemBox.getPosition().y);
  centerItemTxt();
}

// Set itemTxt in the center of the itemBox
void Item::centerItemTxt() {
  float txtPosX = itemBox.getGlobalBounds().width / 2 - 
                  itemTxt.getLocalBounds().width / 2 + 
                  itemBox.getPosition().x -
                  itemBox.getOutlineThickness() * 2;

  float txtPosY = itemBox.getGlobalBounds().height / 2 - 
                  itemTxt.getLocalBounds().height / 2 +  
                  itemBox.getPosition().y -
                  itemBox.getOutlineThickness() * 6;

  itemTxt.setPosition(txtPosX, txtPosY);

  // std::cout << itemBox.getPosition().x << " " << itemBox.getPosition().y << std::endl;
  // std::cout << itemBox.getGlobalBounds().width << " " << itemBox.getGlobalBounds().height << std::endl;
  // std::cout << itemTxt.getPosition().x << " " << itemTxt.getPosition().y << std::endl;
  // std::cout << itemTxt.getGlobalBounds().width << " " << itemTxt.getGlobalBounds().height << std::endl;
}

// Set itemTxt string
void Item::setItemStr(sf::String itemStr) {
  itemTxt.setString(itemStr);
}

// Get itemTxt
sf::String Item::getItemTxt() {
  return itemTxt.getString();
}

// Set item type object position
void Item::setItemPos(float x, float y) {
  itemBox.setPosition(x, y);
  itemTxt.setPosition(x, y);
}

// From sf::Drawable
void Item::draw(sf::RenderTarget& window, sf::RenderStates states) const {
  window.draw(itemBox);
  window.draw(itemTxt);
}

// From EventHandler
void Item::addEventHandler(sf::RenderWindow& window, sf::Event event) {
  // Hover over the itemBox, itemBox fill becomes blue
  if (MouseEvents<sf::RectangleShape>::hovered(itemBox, window)) {
    itemBox.setFillColor(sf::Color::Blue);
    itemTxt.setStyle(sf::Text::Underlined);
    States::enableState(States::HIGHLIGHTED);
    // std::cout << States::isEnabled(States::HIGHLIGHTED) << std::endl;
  }
  else {
    itemBox.setFillColor(sf::Color::Transparent);
    itemTxt.setStyle(sf::Text::Regular);
    States::disableState(States::HIGHLIGHTED);
    // std::cout << States::isEnabled(States::HIGHLIGHTED) << std::endl;
  }

  // Clicks the itemTxt/itemBox
  if (MouseEvents<sf::RectangleShape>::mouseClicked(itemBox, window)) {
    // txtSelect = itemTxt.getString();
    setIfSelectTrue();
    // std::cout << txtSelect << std::endl;
    // std::cout << "--------" << std::endl;
    // std::cout << getIfSelect() << std::endl;
  }
  else if (MouseEvents<sf::Window>::mouseClicked(window, event)) {
    setIfSelectFalse();
    // std::cout << getIfSelect() << std::endl;
  }
}

void Item::update() {
  // if (States::isEnabled(States::HIGHLIGHTED)) {
  //   itemBox.setFillColor(sf::Color::Blue);
  //   itemTxt.setCharacterSize(125);
  // }
  // else {
  //   itemBox.setFillColor(sf::Color::Transparent);
  //   itemTxt.setCharacterSize(100);
  // }

  if (getIfSelect()) {
    txtSelect = itemTxt.getString();
    std::cout << txtSelect << std::endl;
    // std::cout << getIfSelect() << std::endl;
  }
}

// Fron SnapshotInterface
Snapshot& Item::getSnapshot() {

}
void Item::applySnapshot(const Snapshot& snapshot) {

}
