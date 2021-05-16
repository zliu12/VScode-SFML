/**
 * ProjectFont - Header
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#ifndef PROJECTFONT_H_
#define PROJECTFONT_H_
#include "SFML/Graphics.hpp"
#include <cstdlib>

class ProjectFont {
 private:
  static sf::Font font;

 public:
  static void loadFont();
  static sf::Font& getFont();
};


#endif  // PROJECTFONT_H_