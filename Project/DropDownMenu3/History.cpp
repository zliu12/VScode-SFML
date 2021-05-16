/**
 * History - Implementation
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#include "History.h"

std::stack<Snapshot> History::snapshotStack;
std::map<std::string, guiComponent*> History::componentsMap;

void History::pushHistory(const Snapshot& snapshot) {
  snapshotStack.push(snapshot);
}

Snapshot& History::topHistory() {
  return snapshotStack.top();
}

void History::popHistory() {
  snapshotStack.pop();
}

void History::addEventHandler(sf::RenderWindow& window, sf::Event event) {
  if (event.type == sf::Event::KeyPressed) {
    if (KeyBoardShortCuts::isUndo()) {
      popHistory();
    }
  }
}

History::Response& History::getComponent(std::string componentID) {
  static Response temp;
  if (componentsMap.count(componentID) == 1) {
    temp.found = true;
    temp.component = componentsMap[componentID];
  }
  return temp;
}

void History::addComponent(std::string componentID, guiComponent* component) {
  componentsMap[componentID] = component;
}