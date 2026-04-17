#ifndef ITEM_H
#define ITEM_H

#include <string>

/**
 * Item class represents collectible items.
 */
class Item {
private:
    std::string name;
    int value;

public:
    Item();
    Item(const std::string& name, int value);

    std::string getName() const;
    int getValue() const;
};

#endif