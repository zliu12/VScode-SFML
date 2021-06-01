//
// Created by QiChang Liu on 5/29/21.
// Everything related to text display area: area box, text input, text display

#ifndef LOGOMAKER_TEXTAREA_H
#define LOGOMAKER_TEXTAREA_H
#include "GuiComponent.h"
#include "MouseEvents.h"
#include "KeyBoardShortCuts.h"
#include "ModuleBox.h"
#include "TextInput.h"
#include "TextDisplay.h"
#include "Slider.h"

class TextArea : public GuiComponent {
private:
    ModuleBox textAreaBox;
    TextInput textInput;
    TextDisplay textDisplay;

public:
    // Default constructor
    TextArea();

    // Set textAreaBox in the middle of the window
    void centerTextAreaBox();

    // Set textDisplay in the middle of the textAreaBox
//    void centerTextDisplay();

    // Reset textInput position
    void resetTextInputPos();

    // From sf::Drawable class
    void draw(sf::RenderTarget& window, sf::RenderStates states) const override;

    // From EventHandler
    void addEventHandler(sf::RenderWindow& window, sf::Event event) override;
    void update() override;

};


#endif //LOGOMAKER_TEXTAREA_H
