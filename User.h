# ifndef USER_H
# define USER_H
# include <iostream>
# include <string>
# include <vector>
# include "Item.h"
# include "Category.h"

// std::template<class T>;

class User {
    protected:
        // record user did to be printed at the end  
        std::vector<Item> activity_log; 
    public:
        // depends on whether customer or staff
        // print out list of items differently 
        virtual void display_items(Item* item_list, int size) = 0; 

        // print out user activity log 
        // virtual void finish() = 0; 

        // made choice based on different option number
        // staff and customers have different options
        virtual bool choice(int option_number, Item* item) = 0; 

}; 

# endif