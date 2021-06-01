//
// Created by QiChang Liu on 5/29/21.
//

#ifndef LOGOMAKER_FONT_H
#define LOGOMAKER_FONT_H
#include <cstdlib>
#include "SFML/Graphics.hpp"

class Font {
public:
    static sf::Font font;
    static void loadFont();
    static sf::Font& getFont();
};


#endif //LOGOMAKER_FONT_H
