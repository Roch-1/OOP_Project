# ifndef ITEM_H
# define ITEM_H
# include <iostream>
# include <string>

class Item {
    // this class represents unique items 
    // e.g. soap (hygiene class), chicken (food class), etc. 
    protected: 
        // name of the item 
        std::string name; 

        // current quantity in stock 
        int current_quantity; 

        // maximum capacity i.e. how many item can be in stock at most 
        int max_quantity; 

        // price per item
        float price; 

        // number of item that is considered "low" 
        // int low; 

    public: 
        Item(); 
        Item(std::string name, int max_quantity, int current_quantity, int price); 
        std::string get_name(); 
        int get_max_quantity();
        int get_current_quantity();
        float get_price();

        // when manager add item to stock
        bool increase_current_quantity(); 

        // when manager remove item from stock or customer buy item
        bool decrease_current_quantity(); 

        ~Item();

};

# endif 