#include "SFML/Graphics.hpp"
#include "TextInputBox.h"
#include "InputBoxLabel.h"
#include <iostream>

int main() {
	// Create the main window
	sf::RenderWindow win(sf::VideoMode(2500, 1500), "Project1");
	// Set the window's position
	win.setPosition(sf::Vector2i(250, 250));

	// Create a rectangle text input box
	TextInputBox rectangle;

	// Create a input box label
	InputBoxLabel label;

	// While the window is open
	while (win.isOpen()) {
		sf::Event event;
		while (win.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				win.close();
			}
		}

		// Clear the screen
		win.clear();
		// Draw
		win.draw(rectangle);
		win.draw(label);
		// Display
		win.display();
	}

	return 0;
}