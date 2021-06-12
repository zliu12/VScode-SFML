//
// Created by QiChang Liu on 6/7/21.
//

#ifndef LOGOMAKER1_COLORMENU_H
#define LOGOMAKER1_COLORMENU_H
#include "ColorList.h"
#include "ColorPicker.h"
#include "ColorGradient.h"
#include "GuiComponent.h"
#include "MouseEvents.h"

class ColorMenu : public GuiComponent{
private:
    ColorPicker colorPicker;
    ColorList colorList;
    bool drawList = false;

public:
    // Default constructor
    ColorMenu();

    // Customized constructor
    explicit ColorMenu(const std::string& colorPickerLabel, sf::Vector2f colorPickerPos, sf::Vector2f colorListPos);

    // Get color clicked
    sf::Color getColorClicked();

    // Set colorPicker fill color
    void setColorPickerFillColor(sf::Color color);

    // From sf::Drawable class
    void draw(sf::RenderTarget& window, sf::RenderStates states) const override;

    // From EventHandler
    void addEventHandler(sf::RenderWindow& window, sf::Event event) override;
    void update() override;
};


#endif //LOGOMAKER1_COLORMENU_H
