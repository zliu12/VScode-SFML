//
// Created by QiChang Liu on 6/4/21.
//

#include "ItemList.h"

ItemList::ItemList() {
  itemPosY = 0.0;
}

ItemList::ItemList(const vector<string>& itemVec, sf::Vector2f itemPos) {
//  itemPosY = itemPos.y;
  for (int i = 0; i < itemVec.size(); ++i) {
    insert(itemVec.at(i), itemPos);
  }
}

void ItemList::insert(const string& itemStr, sf::Vector2f itemPos) {
  // Create an Item object
  Item itemInserted;

  // Set item object position
  itemInserted.setItemPos(itemPos.x, itemPos.y);

  // Set item object text
  itemInserted.setItemTxtStr(itemStr);

  itemPosY += itemInserted.getItemBoxSize().y;
  itemInserted.setItemPos(itemPos.x, itemPosY);
  itemList.insertAtEnd(itemInserted);
}

void ItemList::setItemListPosition(float x, float y) {
  itemPosY = y;
}

void ItemList::draw(sf::RenderTarget &window, sf::RenderStates states) const {
  LinkedList<Item>::iterator itemListIter = itemList.begin();
  for (; itemListIter != itemList.end(); ++itemListIter) {
    window.draw(*itemListIter);
  }
}

void ItemList::addEventHandler(sf::RenderWindow &window, sf::Event event) {
  LinkedList<Item>::iterator itemListIter = itemList.begin();
  for (; itemListIter != itemList.end(); ++itemListIter) {
    (*itemListIter).addEventHandler(window, event);
  }
}

void ItemList::update() {

}
