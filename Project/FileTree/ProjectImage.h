/**
 * ProjectImage - Header
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#ifndef PROJECTIMAGE_H_
#define PROJECTIMAGE_H_
#include "SFML/Graphics.hpp"
#include <cstdlib>

class ProjectImage {
 private:
  static sf::Texture fileTexture;
  static sf::Texture folderTexture;

 public:
  static void loadFileTexture();
  static void loadFolderTexture();
  static sf::Texture& getFileTexture();
  static sf::Texture& getFolderTexture();
};

#endif  // PROJECTIMAGE_H_