/**
 * Project 1 - History Implementation
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#include "History.h"

/*
void History::pushHistory(const Snapshot& snapshot) {
  stack.push(snapshot);
}

Snapshot& History::topHistory() {
  return stack.top();
}

void History::popHistory() {
  stack.pop();
}

void History::addEventHandler(sf::RenderWindow& window, sf::Event event) {
  if (event.type == sf::Event::KeyPressed) {
    if (KeyBoardShortCuts::isUndo()) {
      popHistory();
    }
  }
}

History::Response& History::getComponent(std::string componentID) {
  static Response tmp;
  if (components.count(componentID) == 1) {
    tmp.found = true;
    tmp.component = components[componentID];
  }
}

void History::addComponent(std::string componentID, GuiComponent* component) {
  components[componentID] = component;
}
*/