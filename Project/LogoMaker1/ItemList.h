//
// Created by QiChang Liu on 6/4/21.
//

#ifndef LOGOMAKER1_ITEMLIST_H
#define LOGOMAKER1_ITEMLIST_H
#include "GuiComponent.h"
#include "Item.h"
#include "LinkedList.h"
using std::vector;
using std::string;

class ItemList : public GuiComponent {
private:
    LinkedList<Item> itemList;
    float itemPosY = 3.0;

public:
    // Default constructor
    ItemList();

    // Customized constructor
    ItemList(const vector<string>& itemVec, sf::Vector2f itemPos);

    // Insert itemTxt into itemList
    void insert(const string& itemStr, sf::Vector2f itemPos);

    // Set itemList position
    void setItemListPosition(float x, float y);

    // From sf::Drawable class
    void draw(sf::RenderTarget& window, sf::RenderStates states) const override;

    // From EventHandler
    void addEventHandler(sf::RenderWindow& window, sf::Event event) override;
    void update() override;
};


#endif //LOGOMAKER1_ITEMLIST_H
