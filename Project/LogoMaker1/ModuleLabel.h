//
// Created by QiChang Liu on 5/29/21.
//

#ifndef LOGOMAKER_MODULELABEL_H
#define LOGOMAKER_MODULELABEL_H
#include "GuiComponent.h"

class ModuleLabel : public GuiComponent {
private:
    sf::Text moduleLabel;

public:
    // Default constructor
    ModuleLabel();

    // Customized constructor
    explicit ModuleLabel(const sf::String& label);

    // Set moduleLabel string
    void moduleLabelSetStr(const std::string& label);

    // Set moduleLabel character size
    void moduleLabelSetCharSize(unsigned  int charSize);

    // Set moduleLabel character color
    void moduleLabelSetCharColor(sf::Color color);

    // Set moduleLabel position
    void moduleLabelSetPos(float x, float y);

    // From sf::Drawable class
    void draw(sf::RenderTarget& window, sf::RenderStates states) const override;

    // From EventHandler
    void addEventHandler(sf::RenderWindow& window, sf::Event event) override;
    void update() override;
};


#endif //LOGOMAKER_MODULELABEL_H
