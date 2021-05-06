#ifndef STATE2_H_
#define STATE2_H_
#include "SFML/Graphics.hpp"
#include <map>

class ItemStates {
 public:
  enum ItemState {ItemBackgroundColor, ITEMLASTSTATE};

  // Default constructor
  ItemStates();

  // Check if a particular ItemState state is enabled
  bool isItemStateEnabled(ItemState state);

  // Enable a particular state (enum ItemState type)
  void enableItemState(ItemState state);

  // Disable a particular state (enum ItemState type)
  void disableItemState(ItemState state);

 private:
  // Store states a type Item object can hold
  std::map<ItemState, bool> itemStates;
};


#endif  // STATE2_H_