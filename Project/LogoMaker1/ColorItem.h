//
// Created by QiChang Liu on 6/7/21.
//

#ifndef LOGOMAKER1_COLORITEM_H
#define LOGOMAKER1_COLORITEM_H
#include "GuiComponent.h"
#include "MouseEvents.h"
#include "ColorGradient.h"

class ColorItem : public GuiComponent {
private:
    sf::RectangleShape colorItemBox;
    sf::Color colorItemBoxOutlineColor = sf::Color(50, 50, 50);
    sf::Color colorClicked;
    ColorGradient colorGradient;
    bool showColorGradient = false;

public:
    // Default constructor
    ColorItem();

    // Customized constructor;
    ColorItem(sf::Color color, sf::Vector2f colorItemPos);

    // Get color clicked
    sf::Color getColorClicked();

    // Get global bounds
    sf::FloatRect getGlobalBounds();

    // From sf::Drawable class
    void draw(sf::RenderTarget& window, sf::RenderStates states) const override;

    // From EventHandler
    void addEventHandler(sf::RenderWindow& window, sf::Event event) override;
    void update() override;
};


#endif //LOGOMAKER1_COLORITEM_H
