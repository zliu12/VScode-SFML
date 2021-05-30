/**
 * ProjectIcon - Header
 * 
 * Copyright (c) [2021], Zhao Liu.
 */

#ifndef PROJECTICON_H_
#define PROJECTICON_H_
#include "SFML/Graphics.hpp"
#include <cstdlib>
#include <iostream>
#include <string>
#include <map>

class ProjectIcon {
 public:
  enum Icons {FOLDER, FILE};
  static void setIconPath(Icons icon);
  static void loadIcon(Icons icon);
  static sf::Texture& getIcon(Icons icon);

 private:
  static std::map<Icons, sf::Texture> iconMap;
  static std::string iconPath;
};

#endif  // PROJECTCONE_H_