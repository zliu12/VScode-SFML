/**
 * ShadowEffect - Header
 *
 * Copyright (c) [2021], John Liu.
 */

#ifndef SHADOWEFFECT_H_
#define SHADOWEFFECT_H_
#include <iostream>
#include "SFML/Graphics.hpp"

class ShadowEffect : public sf::Drawable, public sf::Transformable {
  private:
    sf::Font font;
    sf::Text txt;
    sf::Text txtShadow;
    sf::Color txtShadowColor;

  public:
    // Default constructor
    ShadowEffect();

    // Customized constructor
    explicit ShadowEffect(std::string text);

    // Create txtShadow color
    sf::Color getTxtShadowColor(const sf::Color &color);

    // Set txt position
    void setTxtPos(float x, float y);
    
    // Get font
    sf::Font& getFont();

    // Draw function
    void draw(sf::RenderTarget &window, sf::RenderStates state) const override;
};


#endif  // SHADOWEFFECT_H_