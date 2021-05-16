/**
 * History - Header
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#ifndef HISTORY_H_
#define HISTORY_H_
#include <string>
#include <stack>
#include <map>
#include "Snapshot.h"
#include "guiComponent.h"
#include "KeyBoardShortCuts.h"

class History {
 private:
  static std::stack<Snapshot> snapshotStack;
  static std::map<std::string, guiComponent*> componentsMap;

 public:
  struct Response {
    bool found = false;
    guiComponent* component;
  };
  
  static void pushHistory(const Snapshot& snapshot);
  static Snapshot& topHistory();
  static void popHistory();
  static void addEventHandler(sf::RenderWindow& window, sf::Event event);
  static Response& getComponent(std::string componentID);
  static void addComponent(std::string componentID, guiComponent* component);
};


#endif  // HISTORY_H_