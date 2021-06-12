//
// Created by QiChang Liu on 5/29/21.
//

#ifndef LOGOMAKER_FONT_H
#define LOGOMAKER_FONT_H
#include <iostream>
#include <vector>
#include <string>
#include "SFML/Graphics.hpp"

class Font {
private:
   static sf::Font font;
   static sf::Font textDisplayFont;

public:
    static void loadFont();
    static void loadFont(const std::string& fontName);
    static sf::Font& getFont();
    static sf::Font& getFont(const std::string& fontName);
};


#endif //LOGOMAKER_FONT_H
