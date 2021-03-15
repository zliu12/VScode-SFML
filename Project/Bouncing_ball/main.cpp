/**
 * SFML - Bouncing Objects
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#include <SFML/Graphics.hpp>
#include <iostream>
#include "BounceIt.h"

int main() {
    // Create a 800 x 800 window
    sf::RenderWindow window(sf::VideoMode(2000, 1000), "Bouncing Objects");
    // Set the window position
    window.setPosition(sf::Vector2i(500, 500));
    // Set the refresh rate at 60 times per second
    window.setFramerateLimit(144);

    // Create a BounceAnObject circle
    BounceAnObject<sf::CircleShape> circle;

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        circle.bounce(window);
        window.clear();
        window.draw(circle);
        window.display();
    }
    
    return 0;
}