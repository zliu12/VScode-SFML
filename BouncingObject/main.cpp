#include <iostream>
#include "SFML/Graphics.hpp"
#include "BouncingObject.h"

int main(int, char**) {
	// Window setup
	sf::RenderWindow win(sf::VideoMode(1500, 1500), "BOUNCING BALL");
	win.setPosition(sf::Vector2i(500, 200));
	win.setFramerateLimit(500);

	// Create a BouncingObject type object
	BouncingObject<sf::RectangleShape> rectangle(50, 50);
	rectangle.setObjectPos(win.getSize().x / 2, 50);
	BouncingObject<sf::CircleShape> circle(25);
	circle.setObjectPos(25, win.getSize().y / 2);

	while (win.isOpen()) {
		sf::Event event;
		while (win.pollEvent(event)) {
			if (event.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
				win.close();
			}
		}

		rectangle.bounce(win);
		circle.bounce(win);
		win.clear();
		win.draw(rectangle);
		win.draw(circle);
		win.display();
	}

	return 0;
}
