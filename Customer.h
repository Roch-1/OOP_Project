# ifndef CUSTOMER_H
# define CUSTOMER_H
# include <iostream>
# include <string>
# include "User.h"


class Customer: public User {
    public: 
        Customer();

        // only write item name and price 
        // e.g. pants 30
        void display_items(Item* item_list, int size);  

        // Dear customer, you have purchased:
        // name: xxx
        // price: xxx
        // .... go on  
        // total: total price 
        void finish(); 
        
        // choose what to do with item
        // 1. Add to cart (item.increase_current_quantity() and add this action onto activity_log)
        // 2. Back (do nothing)
        // otherwise, error message 
        bool choice(int option_number, Item* item);

};

# endif