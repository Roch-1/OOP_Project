# ifndef CATEGORY_H
# define CATEGORY_H
# include <iostream>
# include <string>
# include "Item.h"

class Category {
    // this class represent the category the item is in
    // 4 main categories: stationary, food, clothes, book 
    protected: 
        Item* list; 
        
        // size of the array containing items in this category 
        int size; 
        
    public: 
        Category(int size); 

        // set what item is in this category
        Item* set_list(std::string filename); 
        
        // return the list of item 
        Item* get_list(); 

        // delete the dynamic array
        ~Category(); 
    
}; 

# endif