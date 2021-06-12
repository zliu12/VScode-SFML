//
// Created by QiChang Liu on 6/7/21.
//

#ifndef LOGOMAKER1_COLORLIST_H
#define LOGOMAKER1_COLORLIST_H
#include "GuiComponent.h"
#include "MouseEvents.h"
#include "ColorItem.h"
#include "ColorGradient.h"

class ColorList : public GuiComponent {
private:
    sf::RectangleShape colorListBox;
    sf::Color colorListBoxOutlineColor = sf::Color(50, 50, 50);
    sf::Color colorListBoxFillColor = sf::Color(150, 150, 150);
    unsigned int colorItemGap = 45;
    ColorItem colorItem1;
    ColorItem colorItem2;
    ColorItem colorItem3;
    ColorItem colorItem4;
    ColorItem colorItem5;
    ColorItem colorItem6;
    ColorItem colorItem7;
    ColorItem colorItem8;
    ColorGradient colorGradient;
    sf::Color colorClicked;
    bool showColorGradient = false;


public:
    // Default constructor
    ColorList();

    // Customized constructor
    explicit ColorList(sf::Vector2f colorListPos);

    // Get color clicked
    sf::Color getColorClicked();

    // From sf::Drawable class
    void draw(sf::RenderTarget& window, sf::RenderStates states) const override;

    // From EventHandler
    void addEventHandler(sf::RenderWindow& window, sf::Event event) override;
    void update() override;
};


#endif //LOGOMAKER1_COLORLIST_H
