//
// Created by QiChang Liu on 6/8/21.
//

#ifndef LOGOMAKER1_PROJECTICON_H
#define LOGOMAKER1_PROJECTICON_H
#include "SFML/Graphics.hpp"
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


#endif //LOGOMAKER1_PROJECTICON_H
