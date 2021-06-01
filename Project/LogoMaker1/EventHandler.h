//
// Created by QiChang Liu on 5/28/21.
//

#ifndef LOGOMAKER_EVENTHANDLER_H
#define LOGOMAKER_EVENTHANDLER_H
#include "SFML/Graphics.hpp"

class EventHandler {
public:
    virtual void addEventHandler(sf::RenderWindow& window, sf::Event event) = 0;
    virtual void update() = 0;
};


#endif //LOGOMAKER_EVENTHANDLER_H
