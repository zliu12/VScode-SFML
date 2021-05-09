/**
 * projectFont - Implementation
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#include "projectFont.h"
#include <cstdlib>

sf::Font ProjectFont::font;
void ProjectFont::loadFont() {
  font.loadFromFile("OpenSans-Bold.ttf");
  if (!font.loadFromFile("OpenSans-Bold.ttf")) {
    printf("projectFont: Fail to laod font.\n");
    return;
  }
}

sf::Font& ProjectFont::getFont() {
  loadFont();
  return font;
}