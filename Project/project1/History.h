/**
 * Project 1 - History Header
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#ifndef HISTORY_H_
#define HISTORY_H_
#include "Snapshot.h"
#include "guiComponent.h"
#include <string>
#include <stack>
#include <map>

class History {
 private:
  static std::stack<Snapshot> stack;
  static std::map<std::string, GuiComponent*> components;

 public:
  struct Response {
    bool found = false;
    GuiComponent* component;
  };
  
  static void pushHistory(const Snapshot& snapshot);
  static Snapshot& topHistory();
  static void popHistory();
  static void addEventHandler(sf::RenderWindow& window, sf::Event event);
  static Response& getComponent(std::string componentID);
  static void addComponent(std::string componentID, GuiComponent* component);
};

#endif  // HISTORY_H_