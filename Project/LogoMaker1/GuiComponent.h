//
// Created by QiChang Liu on 5/28/21.
//

#ifndef LOGOMAKER_GUICOMPONENT_H
#define LOGOMAKER_GUICOMPONENT_H
#include <iostream>
#include <string>
#include <cstdlib>
#include "SFML/Graphics.hpp"
#include "EventHandler.h"
#include "Font.h"

class GuiComponent : public EventHandler,
                     public Font,
                     public sf::Drawable,
                     public sf::Transformable {
public:
    // From sf::Drawable class
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const = 0;

    // From EventHandler
    virtual void addEventHandler(sf::RenderWindow& window, sf::Event event) = 0;
    virtual void update() = 0;
};


#endif //LOGOMAKER_GUICOMPONENT_H
