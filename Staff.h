# ifndef STAFF_H
# define STAFF_H
# include <iostream>
# include <string>
# include "User.h"

class Staff: public User {
    public: 
        Staff(); 

        // Display item name, current quanity, max quantity, price 
        void display_items( Item* item_list, int size); 

        // These are the changes you made: 
        // Remove 1 eraser
        // Add 2 jeans s
        // basically, print out activity log 
        // void finish(); 

        // choose what to do with item
        // 1. Add (item.increase_current_quantity() and add this action onto activity_log)
        // 2. Remove (item.decrease_current_quantity() and add this action onto activity_log)
        // 3. Back 
        // otherwise, error message 
        bool choice(int option_number, Item* item);
}; 

# endif 