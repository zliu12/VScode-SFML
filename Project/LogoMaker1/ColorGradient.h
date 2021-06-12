//
// Created by QiChang Liu on 6/8/21.
//

#ifndef LOGOMAKER1_COLORGRADIENT_H
#define LOGOMAKER1_COLORGRADIENT_H
#include "SFML/Graphics.hpp"
#include "GuiComponent.h"

class ColorGradient : public GuiComponent {
private:
//    sf::VertexArray pixel = sf::VertexArray(sf::Points, 1);
    sf::VertexArray pixel = sf::VertexArray(sf::Points, 400 * 400);
    sf::Color newColor;
    float initialPosX = 2200;
    float initialPosY = 1210;
    float hue;
    float S;
    float V;
    float RGB_R;
    float RGB_G;
    float RGB_B;

public:
    // Default constructor
    ColorGradient();

    // Customized constructor
    explicit ColorGradient(sf::Color color);

    // Set each pixel point
    void setPixelPoint();

    // Find RGB
    void findRGB(sf::Color color);

    // Find hue
    float findHue(sf::Color color);

    // Get color clicked
    sf::Color getColorClicked();

    // From sf::Drawable class
    void draw(sf::RenderTarget& window, sf::RenderStates states) const override;

    // From EventHandler
    void addEventHandler(sf::RenderWindow& window, sf::Event event) override;
    void update() override;
};


#endif //LOGOMAKER1_COLORGRADIENT_H
