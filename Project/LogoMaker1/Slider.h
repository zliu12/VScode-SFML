//
// Created by QiChang Liu on 5/28/21.
//

#ifndef LOGOMAKER_SLIDER_H
#define LOGOMAKER_SLIDER_H
#include "SFML/Graphics.hpp"
#include "GuiComponent.h"
#include "KeyBoardShortCuts.h"
#include "MouseEvents.h"
#include "ModuleLabel.h"
#include "ModuleBox.h"
#include "Item.h"

class Slider : public GuiComponent {
private:
    ModuleBox sliderBox;
    ModuleLabel sliderLabel;
    sf::RectangleShape scaleLine;
    sf::CircleShape scaleMark;
    sf::Vector2f initPos;
    sf::Text numVal;
    bool clicked = false;
    int MovDist = 0;
    std::string MovDistStr;
    bool showScaleMark = false;

public:
    // Default constructor
    Slider();

    // Customized constructor
    explicit Slider(const std::string& sliderLabel, sf::Vector2f pos);

    // Set sliderLabel position
    void setSliderLabelPos();

    // Set scaleLine position
    void setScaleLinePos();

    // Set scaleMark position
    void setScaleMarkPos();

    // Set numVal position
    void setNumValPos();

    // Move scaleMark vertically
    void moveScaleMark(sf::RenderWindow &window);

    // Set clicked true
    void setClickedTrue(sf::RenderWindow &window, sf::Event event);

    // Get moving distance
    int getMovingDistance() const;

    // Get slider position
    sf::Vector2f getSliderPos();

    // Reset slider position
    void resetSliderPos();

    void draw(sf::RenderTarget& window, sf::RenderStates states) const override;
    void addEventHandler(sf::RenderWindow& window, sf::Event event) override;
    void update() override;
};


#endif //LOGOMAKER_SLIDER_H
