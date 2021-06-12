//
// Created by QiChang Liu on 6/7/21.
//

#ifndef LOGOMAKER1_COLORPICKER_H
#define LOGOMAKER1_COLORPICKER_H
#include "SFML/Graphics.hpp"
#include "ModuleBox.h"
#include "ModuleLabel.h"
#include "KeyBoardShortCuts.h"
#include "GuiComponent.h"
#include "ColorList.h"

class ColorPicker : public GuiComponent {
private:
    ModuleLabel colorPickerLabel;
    ModuleBox colorPickerBox;
    sf::Vector2f colorPickerInitialPos;
    sf::Color colorPickerBoxColor = sf::Color(50, 50, 50);

public:
    // Default constructor
    ColorPicker();

    // Customized constructor
    ColorPicker(const std::string& pickerLabel, sf::Vector2f pickerPos);

    // Set colorPickerLabel position
    void setColorPickerLabelPos();

    // Get colorPickerBox color
    sf::Color getColorPickerBoxColor();

    // Reset colorPicker position
    void resetColorPickerPos();

    // Get global bounds of colorPickerBox
    sf::FloatRect getGlobalBounds();

    // Set colorPickerBox fill color
    void setColorPickerFillColor(sf::Color color);

    // From sf::Drawable class
    void draw(sf::RenderTarget &window, sf::RenderStates states) const override;

    // From EventHandler
    void addEventHandler(sf::RenderWindow &window, sf::Event event) override;

    void update() override;
};

#endif //LOGOMAKER1_COLORPICKER_H
