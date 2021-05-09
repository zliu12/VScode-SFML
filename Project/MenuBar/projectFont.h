/**
 * projectFont - Header
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#ifndef PROJECTFONT_H_
#define PROJECTFONT_H_
#include "SFML/Graphics.hpp"

class ProjectFont {
 public:
  static sf::Font font;
  static void loadFont();
  static sf::Font& getFont();
};


#endif  // PROJECTFONT_H_