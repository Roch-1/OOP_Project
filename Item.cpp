# include "Item.h"

Item::Item(std::string name, int current_quantity, int max_quantity, int price) {
    // constructor
    this->name = name; 
    this->current_quantity =  current_quantity; 
    this->max_quantity = max_quantity; 
    this->price = price; 
    // this->low = low; 
}

Item::Item() {
    // constructor
    this->name = ""; 
    this->max_quantity = 0; 
    this->current_quantity = 0; 
    this->price = 0; 
    // this->low = 0; 
}

std::string Item::get_name() {
    // return the name of the item
    return name; 
}

int Item::get_max_quantity() {
    // get the max quantity of this item 
    return max_quantity; 
}
int Item::get_current_quantity() {
    // get the current quantity of this item
    return current_quantity; 
}

float Item::get_price() {
    // return the price of this item
    return price; 
}

bool Item::increase_current_quantity() {
    // return true if manager can add item to stock 
    // increase current quantity of this item 
    if (current_quantity < max_quantity) {
        current_quantity = current_quantity + 1;
        // std::cout << "Successfully add item. There are now " << current_quantity << " " << name << std::endl; 
        return true; 
    }
    // if the current numbers of items is at max capacity, cant add anymore
    // return false  
    else {
        std::cout << name << " is at maximum capacity. Can not add more." << std::endl; 
        return false; 
    }
}

bool Item::decrease_current_quantity() {
    // return true when can decrease current quantity
    // false otherwise
    // used when manager remove item from stock or customer buy item

    if (current_quantity > 0) {
        current_quantity = current_quantity - 1; 
        return true; 
    }
    else {
        std::cout << "Unable to retrieve " << name << " because this item ran out." << std::endl;
        return false; 
    }
}

Item::~Item() {
}
