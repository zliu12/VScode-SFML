/**
 * Item - Header
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#ifndef ITEM_H_
#define ITEM_H_
#include "GuiComponent.h"
#include "MouseEvents.h"
#include "States.h"

class Item : public sf::RectangleShape, public States {
 private:
  // Box contains the text
  sf::RectangleShape itemBox;
  // The string text
  sf::Text itemTxt;
  // txt clicked
  std::string txtSelect;
  // Indicate if a txt is selected
  bool ifSelect;

 public:
  // get txtSelect
  std::string getTxtSelect();
  
  // Set txtSelect true
  void setIfSelectTrue();

  // Set txtSelect false
  void setIfSelectFalse();

  // Get txtSelect
  bool getIfSelect();

  // Default constructor
  Item();

  // Set itemTxt in the center of the itemBox
  void centerItemTxt();
  
  // Set itemTxt string
  void setItemStr(sf::String itemStr);

  // Get itemTxt
  sf::String getItemTxt();

  // Set item type object position
  void setItemPos(float x, float y);

  // From sf::Drawable
  virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;

  // From EventHandler
  virtual void addEventHandler(sf::RenderWindow& window, sf::Event event);
  virtual void update();

  // Fron SnapshotInterface
  virtual Snapshot& getSnapshot();
  virtual void applySnapshot(const Snapshot& snapshot);
};


#endif  // ITEM_H_