/**
 * StatesItem - Implementation
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#include "StatesItem.h"

StatesItem::StatesItem() {
  for (int i = ITEMBGCOLOR; i < ITEMLASTSTATE; ++i) {
    itemStatesMap[static_cast<ItemStates>(i)] = false;
  }
}

bool StatesItem::itemStateEnabled(ItemStates state) {
  if (itemStatesMap.count(state) > 0) {
    return itemStatesMap[state];
  }
  return false;
}

void StatesItem::enableItemState(ItemStates state) {
  itemStatesMap[state] = true;
}

void StatesItem::disableItemState(ItemStates state) {
  itemStatesMap[state] = false;
}