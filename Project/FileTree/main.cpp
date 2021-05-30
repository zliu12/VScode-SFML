#include <iostream>
#include "SFML/Graphics.hpp"
#include "FileItem.h"
#include "FileNode.h"
#include "FileTree.h"

int main() {
	sf::RenderWindow window(sf::VideoMode(2500, 1200), "Drop Down Menu");
	window.setPosition(sf::Vector2i(100, 100));

	// FileItem fileItem("Directory 1", ProjectIcon::Icons::FOLDER);
	// fileItem.setPosition(sf::Vector2f(10, 10));
	// FileItem fileItem2("File 2", ProjectIcon::Icons::FILE);
	// 140 = fileItemPosY(10) + fileItemSizeY(125) + fileItemOutlineThickness(5)
	// fileItem2.setPosition(sf::Vector2f(135, 140));

	FileTree tree;
	tree.push("Directory 1", "File 1");
	tree.push("Directory 1", "File 2");
	tree.push("Directory 1", "File 3");
	tree.push("Directory 1", "Directory 2");
	tree.push("Directory 2", "File 1");
	tree.push("Directory 2", "Directory 3");
	tree.push("Directory 3", "File 1");

	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
				window.close();
			}

			// std::cout << sf::Mouse::getPosition(window).x << " " << sf::Mouse::getPosition(window).y << std::endl;
			// fileItem.addEventHandler(window, event);
			// fileItem2.addEventHandler(window, event);
			// std::cout << fileItem.getTextPos().x << std::endl;
			tree.addEventHandler(window, event);
			// node.addEventHandler(window, event);
		}

		window.clear();
		tree.update();
		// window.draw(fileItem);
		// window.draw(fileItem2);
		// window.draw(node);
		window.draw(tree);
		window.display();
	}
	
	
	return 0;
}

