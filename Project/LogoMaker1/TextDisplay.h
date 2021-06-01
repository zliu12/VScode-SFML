//
// Created by QiChang Liu on 5/29/21.
//

#ifndef LOGOMAKER_TEXTDISPLAY_H
#define LOGOMAKER_TEXTDISPLAY_H
#include "GuiComponent.h"
#include "Slider.h"

class TextDisplay : public GuiComponent {
private:
    sf::Text textDisplay;
    Slider fontSize = Slider("Font Size", {5, 870});
    Slider textOpacity = Slider("Text Opacity", {210, 870});
    Slider textXAxis = Slider("Text X-Axis", {415,870});
    Slider textYAxis = Slider("Text Y-Axis", {620,870});


//    Slider textHorizScale = Slider("Text ScaleX", {825, 870});
//    Slider textVerScale = Slider("Text ScaleY", {1030, 870});

    sf::Text textDisplayShadow;
    Slider shadowXAxis = Slider("Shadow X-Axis", {825, 870});
    Slider shadowYAxis = Slider("Shadow Y-Axis", {1030, 870});
    Slider shadowOpacity = Slider("Shadow Opacity", {1235, 870});
    Slider shadowSkew = Slider("Shadow Skew", {1440, 870});
    Slider bgOpacity = Slider("Background Opacity", {1645, 870});

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

    // From sf::Drawable class
    void draw(sf::RenderTarget& window, sf::RenderStates states) const override;

    // From EventHandler
    void addEventHandler(sf::RenderWindow& window, sf::Event event) override;
    void update() override;
};


#endif //LOGOMAKER_TEXTDISPLAY_H
