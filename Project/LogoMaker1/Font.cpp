//
// Created by QiChang Liu on 5/29/21.
//

#include "Font.h"

sf::Font Font::font;

void Font::loadFont() {
    font.loadFromFile("OpenSans-Bold.ttf");
    if (!font.loadFromFile("OpenSans-Bold.ttf")) {
        printf("Font::Fail to load font.\n");
    }
}

sf::Font &Font::getFont() {
    loadFont();
    return font;
}
