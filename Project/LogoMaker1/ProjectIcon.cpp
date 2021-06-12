//
// Created by QiChang Liu on 6/8/21.
//

#include "ProjectIcon.h"
std::map<ProjectIcon::Icons, sf::Texture> ProjectIcon::iconMap;
std::string ProjectIcon::iconPath;

void ProjectIcon::setIconPath(ProjectIcon::Icons icon) {
  if (icon == ProjectIcon::FOLDER) {
    iconPath = "Icons/folder.png";
  }
  else if (icon == ProjectIcon::FILE) {
    iconPath = "Icons/file.png";
  }
}

void ProjectIcon::loadIcon(ProjectIcon::Icons icon) {
  setIconPath(icon);
  if (!iconMap[icon].loadFromFile(iconPath)) {
    std::cout << "Fail to load " << icon << std::endl;
  }
}

sf::Texture &ProjectIcon::getIcon(ProjectIcon::Icons icon) {
  loadIcon(icon);
  return iconMap[icon];
}
