/**
 * ProjectFont - Header
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#include "ProjectFont.h"

sf::Font ProjectFont::font;

void ProjectFont::loadFont() {
  font.loadFromFile("OpenSans-Bold.ttf");
  if(!font.loadFromFile("OpenSans-Bold.ttf")) {
    printf("ProjectFont: fail to load font.\n");
  }
}

sf::Font& ProjectFont::getFont() {
  loadFont();
  return font;
}
