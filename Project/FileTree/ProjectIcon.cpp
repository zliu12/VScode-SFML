/**
 * ProjectIcon - Implementation
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#include "ProjectIcon.h"

std::map<ProjectIcon::Icons, sf::Texture> ProjectIcon::iconMap;
std::string ProjectIcon::iconPath;

void ProjectIcon::setIconPath(Icons icon) {
  if (icon == ProjectIcon::FOLDER) {
    iconPath = "folder.png";
  }
  else if (icon == ProjectIcon::FILE) {
    iconPath = "file.png";
  }
}

void ProjectIcon::loadIcon(Icons icon) {
  setIconPath(icon);
  iconMap[icon].loadFromFile(iconPath);
  if (!iconMap[icon].loadFromFile(iconPath)) {
    std::cout << "Fail to load " << icon << " ." << std::endl;
  }
}

sf::Texture& ProjectIcon::getIcon(Icons icon) {
  loadIcon(icon);
  return iconMap[icon];
}


