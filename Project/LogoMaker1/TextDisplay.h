//
// Created by QiChang Liu on 5/29/21.
//

#ifndef LOGOMAKER_TEXTDISPLAY_H
#define LOGOMAKER_TEXTDISPLAY_H
#include "GuiComponent.h"
#include "Slider.h"
#include "Item.h"
#include "ColorMenu.h"

class TextDisplay : public GuiComponent {
private:
    sf::Text textDisplay;
    sf::Text textDisplayShadow;
    Slider fontSize = Slider("Font Size", {35, 980});
    Slider shadowFontSize = Slider("Shadow Font Size", {240, 980});
    Slider textOpacity = Slider("Text Opacity", {445, 980});
    Slider shadowOpacity = Slider("Shadow Opacity", {650, 980});
    Slider textXAxis = Slider("Text X-Axis", {855,980});
    Slider shadowXAxis = Slider("Shadow X-Axis", {1060, 980});
    Slider textYAxis = Slider("Text Y-Axis", {1265,980});
    Slider shadowYAxis = Slider("Shadow Y-Axis", {1470, 980});
    Slider shadowSkew = Slider("Shadow Skew", {1675, 980});
    ColorMenu fontColorMenu = ColorMenu("Font Color", {2040, 1130}, {2040, 1200});

public:
    // Default constructor
    TextDisplay();

    // Set textDisplay font
    void setTextDisplayFont();

    // Set textDisplay character size
    void setTextDisplayCharSize(unsigned int charSize);

    // Set textDisplay fill color
    void setTextDisplayColor(sf::Color color);

    // Set textDisplay string
    void setTextDisplayStr(const sf::String& str);

    // Set textDisplay position
    void setTextDisplayPos(float x, float y);

    // Set textDisplayShadow position
    void setTextDisplayShadowPos(float x, float y);

    // From sf::Drawable class
    void draw(sf::RenderTarget& window, sf::RenderStates states) const override;

    // From EventHandler
    void addEventHandler(sf::RenderWindow& window, sf::Event event) override;
    void update() override;
};


#endif //LOGOMAKER_TEXTDISPLAY_H
