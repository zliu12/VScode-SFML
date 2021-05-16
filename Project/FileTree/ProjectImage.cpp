/**
 * ProjectImage - Header
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#include "ProjectImage.h"

sf::Texture ProjectImage::fileTexture;
sf::Texture ProjectImage::folderTexture;

void ProjectImage::loadFileTexture() {
  fileTexture.loadFromFile("file.png");
  if(!fileTexture.loadFromFile("file.png")) {
    printf("ProjectImage: fail to load file.png.\n");
  }
}

void ProjectImage::loadFolderTexture() {
  folderTexture.loadFromFile("folder.png");
  if(!folderTexture.loadFromFile("file.png")) {
    printf("ProjectImage: fail to load folder.png.\n");
  }
}

sf::Texture& ProjectImage::getFileTexture() {
  loadFileTexture();
  return fileTexture;
}

sf::Texture& ProjectImage::getFolderTexture() {
  loadFolderTexture();
  return folderTexture;
}
