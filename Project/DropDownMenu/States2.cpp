#include "States2.h"

// Default constructor
ItemStates::ItemStates() {
  // Initialize ItemState to false
  for(int i = ItemBackgroundColor; i < ITEMLASTSTATE; ++i) {
    itemStates[static_cast<ItemState>(i)] = false;
  }
}

// Check if a particular ItemState state is enabled
bool ItemStates::isItemStateEnabled(ItemState state) {
  // Use map::count() to check if ItemState type state (the key) is present 
  // in the map container (1 or 0)
  if(itemStates.count(state) > 0) {
    // Return the state (true or false) of ItemState states
    return itemStates[state];
  }
  return false;
}

// Enable a particular state (enum ItemState type)
void ItemStates::enableItemState(ItemState state) {
  itemStates[state] = true;
}

// Disable a particular state (enum ItemState type)
void ItemStates::disableItemState(ItemState state) {
  itemStates[state] = false;
}