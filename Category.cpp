# include "Category.h"
# include "Item.h"
# include <fstream>

Category::Category(int size) {
    this->size = size;
    list = new Item[size]; 
}
 
Item* Category::set_list(std::string filename) {
    // set what item the list is consisted off
    // imported from existing file 
    std::ifstream current_item; 

    // open filename
    current_item.open(filename); 

    if (!current_item) {
        // if unable to open file, error message
        std::cout << "Unable to open file." << std::endl; 
        return nullptr; 
    }
    else {
        for (int i = 0; i < size; i++) {
            // item that is about to be read from file 
            // able to open file
            // store name of item 
            std::string new_name = ""; 

            // store current quantity of item 
            int new_current_quantity = 0; 

            // store maximum capacity of item
            int new_max_quantity = 0; 

            // store price per item
            float new_price = 0; 

            // input info from filename to this item 
            current_item >> new_name >> new_current_quantity >> new_max_quantity >> new_price; 

            // construct object item based on this information
            Item new_item(new_name, new_current_quantity, new_max_quantity, new_price); 

            // add this item to the list 
            list[i] = new_item; 
            /*
            std::cout << "debug: current quantity of this item should be: " << new_current_quantity << std::endl;
            std::cout << "debug: current quantity of this item is actually: " << list[i].get_current_quantity() << std::endl;
            */
        }
        return list; 
    }
}

Item* Category::get_list() {
    return list; 
}

Category::~Category() {
    delete[] list; 
}