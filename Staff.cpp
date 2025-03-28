#include "Staff.h"
#include <iostream>
#include <vector>

Staff::Staff(){

};


void Staff::display_items(Item* item_list, int size) {
    
    // Display item name, current quanity, max quantity, price 
    // iterate through array in item 
    for (int i = 0; i < size; i++) {
        std::cout << i + 1 << ". " << item_list[i].get_name() << std::endl; 

        std::cout << "Current quantity: " << item_list[i].get_current_quantity() << std::endl; 

        std::cout << "Max quantity: " << item_list[i].get_max_quantity() << std::endl;
        
        std::cout << "Price: $" << item_list[i].get_price() << std::endl << std::endl;

    }

} 

// choose what to do with item
// 1. Add (item.increase_current_quantity() and add this action onto activity_log)
// 2. Remove (item.decrease_current_quantity() and add this action onto activity_log)
// 3. Back 
// otherwise, error message 

bool Staff::choice(int option_number, Item* item) { 
    // vector.push(item)
    if (option_number == 1) {
        // increase the current quantity of item in store 
        if ((*item).increase_current_quantity()) {
            std::cout << "Add " << (*item).get_name(); 
        } 
        // std::cout << "debug: current quantity is now " << item.get_current_quantity() << std::endl;
        return true; 

    }else if(option_number == 2){

        // add to cart
        // one less of it in the store
        if ((*item).decrease_current_quantity()) {
            std::cout << "Remove " << (*item).get_name() << std::endl;
            // std::cout << "debug: current quantity is now " << item.get_current_quantity() << std::endl;  
        } 
        return true; 

    }
    else if(option_number == 3){       
        std::cout << "No change " << std::endl; 
        return true; 
    }
    else{
        // std::cout<<"Please choose between 1, 2, or 3 only. "<<std::endl;
        return false; 

    }
    

}