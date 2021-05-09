/**
 * States2 - Header
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#ifndef STATESITEM_H_
#define STATESITEM_H_
#include "SFML/Graphics.hpp"
#include <map>

class StatesItem {
 public:
  enum ItemStates {ITEMBGCOLOR, ITEMLASTSTATE};
  StatesItem();
  bool itemStateEnabled(ItemStates state);
  void enableItemState(ItemStates state);
  void disableItemState(ItemStates state);

 private:
  std::map<ItemStates, bool> itemStatesMap;
};

#endif  // STATESITEM_H_