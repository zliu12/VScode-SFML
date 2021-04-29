/**
 * Project 1 - History Header
 *
 * Copyright (c) [2021], Zhao Liu.
 */

/* 
Undo part of the program
Push snapshots to a stack whenever your object makes any changes, once undo is
pressed, the stack will pop the snapshot and apply it back to the object.
Holds all the undo history for the entir GUI library, so it will need to know which
object the snapshot should be applied to
 */
#ifndef HISTORY_H_
#define HISTORY_H_
#include "Snapshot.h"
#include "KeyBoardShortCuts.h"
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