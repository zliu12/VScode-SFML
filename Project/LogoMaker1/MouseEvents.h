//
// Created by QiChang Liu on 5/28/21.
//

#ifndef LOGOMAKER_MOUSEEVENTS_H
#define LOGOMAKER_MOUSEEVENTS_H
#include "SFML/Graphics.hpp"
#include <iostream>

template <class T>
class MouseEvents {
public:
    // Return true if the mouse clicks on the object
    static bool objClicked(T& object, sf::RenderWindow& window);

    // Return true if the mouse clicks anywhere in the window
    static bool winClicked(sf::RenderWindow& window, sf::Event event);

    // Return true if double clicked
    static bool mouseDoubleClicked();

    // Return true if the object has been clicked and the mouse has dragged over the object
    static bool draggedOver(T& object, sf::RenderWindow& window, sf::Event event);

    // Return true if the mouse is hovered over the object
    static bool hovered(T& object, sf::RenderWindow& window);

    // Get mouse position in the window
    static sf::Vector2i getMousePos(sf::RenderWindow& window);

    // Check if the object has reached the window bound
    static bool reachWindowBound(sf::RenderWindow& window, T& object);

private:
    static sf::Clock clock;
    static int clicks;
    static void countClicks(sf::Event event);
};



#include "MouseEvents.cpp"
#endif //LOGOMAKER_MOUSEEVENTS_H
