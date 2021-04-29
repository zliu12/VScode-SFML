#include "SFML/Graphics.hpp"
#include "TextInput.h"
#include <iostream>

int main() {
	// Create the main window
	sf::RenderWindow win(sf::VideoMode(2500, 1500), "Project1");
	// Set the window's position
	win.setPosition(sf::Vector2i(250, 250));

	// Create a text input object
	TextInput inputBox;

	// While the window is open
	while (win.isOpen()) {
		sf::Event event;
		while (win.pollEvent(event)) {
			if (event.type == sf::Event::Closed || 
					sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
				win.close();
			}

			// Detect the keyboard inputs and concatenate inputs to the text object
			inputBox.addEventHandler(win, event);
		}

		// Update the typing content before the object is drawn on the screen and
		// after the TextEntered event is handled 
		inputBox.update();
		
		// Clear the screen
		win.clear();

		// Draw the text input box
		win.draw(inputBox);

		// Display
		win.display();
	}

	return 0;
}