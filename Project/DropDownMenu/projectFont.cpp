/**
 * projectFont - Implementation
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#include "projectFont.h"
#include <cstdlib>


sf::Font projectFont::font;
void projectFont::loadFont() {
  font.loadFromFile("OpenSans-Bold.ttf");
  if(!font.loadFromFile("OpenSans-Bold.ttf")) {
    printf("projectFont::Fail to load font.\n");
  }
}

sf::Font& projectFont::getFont() {
  loadFont();
  return font;
}