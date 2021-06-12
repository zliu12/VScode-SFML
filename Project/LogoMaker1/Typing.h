//
// Created by QiChang Liu on 5/29/21.
// Typing feature

#ifndef LOGOMAKER_TYPING_H
#define LOGOMAKER_TYPING_H
#include "SFML/Graphics.hpp"
#include "GuiComponent.h"
#include "Item.h"
#include "KeyBoardShortCuts.h"

class Typing : public GuiComponent {
private:
    sf::Font typingFont;
    sf::Text txt;

    sf::String str;

public:
    // Default constructor
    Typing();

    // Delete input character
    void deleteChar();

    // Delete all input characters
    void deleteAllChars();

    // Get txt
    sf::String getTxt();

    // Set txt position
    void setTxtPos(float x, float y);

    // Set txt size
    void setTxtSize(unsigned int size);

    // From sf::Drawable class
    void draw(sf::RenderTarget& window, sf::RenderStates states) const override;

    // From EventHandler
    void addEventHandler(sf::RenderWindow& window, sf::Event event) override;
    void update() override;
};


#endif //LOGOMAKER_TYPING_H
