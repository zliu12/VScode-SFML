//
// Created by QiChang Liu on 5/29/21.
// Everything related to text input: typing, input box, input box label

#ifndef LOGOMAKER_TEXTINPUT_H
#define LOGOMAKER_TEXTINPUT_H
#include "GuiComponent.h"
#include "ModuleBox.h"
#include "ModuleLabel.h"
#include "Typing.h"

class TextInput : public GuiComponent {
private:
    ModuleBox textInputBox;
    ModuleLabel textInputLabel;
    Typing txtTyped;

public:
    // Default constructor
    TextInput();

    // Set textInputBox position
    void setTextInputBoxPos(float x, float y);

    // Set textInputLabel position
    void setTextInputLabelPos();

    // Set txtType position
    void setTxtTypedPos();

    // Set textInputBox size
    sf::Vector2f getTextInputBoxSize();

    // Get txtTyped
    sf::String getTxtTyped();

    // From sf::Drawable class
    void draw(sf::RenderTarget& window, sf::RenderStates states) const override;

    // From EventHandler
    void addEventHandler(sf::RenderWindow& window, sf::Event event) override;
    void update() override;
};


#endif //LOGOMAKER_TEXTINPUT_H
