/**
 * Type In SFML - Header
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#ifndef TYPE_IN_SFML_H_
#define TYPE_IN_SFML_H_
#include <SFML/Graphics.hpp>
#include <string>
using std::string;

class PrintTextTyped : public sf::Transformable, public sf::Drawable {
 private:
  sf::Font font;
  sf::Text txt;
  sf::String str;

 public:
  // Default constructor
  PrintTextTyped();
  // Load the font
  void loadFont();
  // Virtual draw function
  virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;
  // Take care the event
  void addEventHandler(sf::RenderWindow& window, sf::Event event);
  // Update the typing content
  void update();
};

#endif  // TYPE_IN_SFML_H_