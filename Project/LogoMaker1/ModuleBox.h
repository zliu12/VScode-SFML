//
// Created by QiChang Liu on 5/29/21.
//

#ifndef LOGOMAKER_MODULEBOX_H
#define LOGOMAKER_MODULEBOX_H
#include "GuiComponent.h"
#include "MouseEvents.h"

class ModuleBox : public GuiComponent {
private:
    sf::RectangleShape moduleBox;
    bool clicked = false;
    sf::Color moduleBoxOutlineColor = sf::Color(100, 100, 100);

public:
    // Default constructor
    ModuleBox();

    // Set moduleBox size
    void moduleBoxSetSize(float width, float height);

    // Set moduleBox position
    void moduleBoxSetPos(float x, float y);

    // Set moduleBox fill color
    void moduleBoxSetFillColor(const sf::Color& color);

    // Set moduleBox outline color
    void moduleBoxSetOutlineFillColor(const sf::Color& color);

    // Set moduleBox outline thickness
    void moduleBoxSetOutlineThickness(float x);

    // Get moduleBox size
    sf::Vector2f getModuleBoxSize() const;

    // Get moduleBox outline thickness
    float getModuleBoxOutlineThickness() const;

    // Get moduleBox position
    sf::Vector2f getModuleBoxPos() const;

    // Get moduleBox global bounds
    sf::FloatRect getGlobalBounds();

    // Get moduleBox color
    sf::Color getModuleBoxColor();

    // From sf::Drawable class
    void draw(sf::RenderTarget& window, sf::RenderStates states) const override;

    // From EventHandler
    void addEventHandler(sf::RenderWindow& window, sf::Event event) override;
    void update() override;
};


#endif //LOGOMAKER_MODULEBOX_H
