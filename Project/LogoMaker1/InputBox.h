//
// Created by QiChang Liu on 6/2/21.
//

#ifndef LOGOMAKER1_INPUTBOX_H
#define LOGOMAKER1_INPUTBOX_H
#include "GuiComponent.h"
#include "MouseEvents.h"


class InputBox : public sf::Drawable {
private:
    sf::RectangleShape menuBox;
    sf::Text menuName;
    sf::Color menuBoxSelectedColor = sf::Color(50, 50, 50);
    bool clickAOption;

public:
    // Default constructor
    InputBox();

    // Customized construrctor
    InputBox(const std::string &name, sf::Vector2f pos);

    // Set text in the center
    void centerMenuName();

    // Get global bounds of menuBox
    sf::FloatRect getGlobalBounds();

    // From sf::Drawable class
    void draw(sf::RenderTarget& window, sf::RenderStates states) const;

    // From EventHandler
    void addEventHandler(sf::RenderWindow& window, sf::Event event);
    void update();
};


#endif //LOGOMAKER1_INPUTBOX_H
