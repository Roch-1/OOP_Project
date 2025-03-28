# include "Customer.h"
#include <iostream>
#include <vector>


Customer::Customer() {
    // create empty vector
}

void Customer::display_items(Item* item_list, int size) {
    // input: array and size 
    // print out item in a specific layout for customer
    // only write item name and price 
    // e.g. 1. Pants
    //         Price: 20 

    // iterate through array in item 
    for (int i = 0; i < size; i++) {
        std::cout << i + 1 << ". " << item_list[i].get_name() << std::endl; 
        std::cout << "Price: $" << item_list[i].get_price() << std::endl << std::endl;
    }

} 


void Customer::finish() {

    // print out what the customers buy after customer finish purchase

    //making a iterator
    std::vector<Item>::iterator activities;

    // initialize total price
    int total_price=0;

    //variable for index
    int index=1;

    std::cout << "Dear customer, here are the items you purchased: " << std::endl << std::endl;

    //using loop throught vector to show all the customer activity
    for( activities=activity_log.begin() ;activities<activity_log.end(); activities++){   
       
        std::cout << index << ".Name: " << activities->get_name() <<std::endl;

        std::cout <<"  "<< "Price: $"<< activities->get_price() <<std::endl<<std::endl;

        total_price += activities->get_price();

        index++;
    }

    //output for the total purchased
    std::cout << "  Total Price: $" << total_price << std::endl<< std::endl; 
} 


// choose what to do with item
// 1. Add to cart (item.increase_current_quantity() and add this action onto activity_log)
// 2. Back (do nothing)
// otherwise, error message 
bool Customer::choice(int option_number, Item* item) {
    // vector.push(item)
    if (option_number == 1) {
        // add to cart
        // one less of it in the store
        // if successfully purchase it, put it to shopping list 
        if ((*item).decrease_current_quantity()) {
            activity_log.push_back(*item);
        } 
        return true; 
    }else if(option_number == 2){
        std::cout << "No change " << std::endl; 
        return true; 
    }else{
        // std::cout<<"Please choose between 1 and 2 only. " << std::endl;
        return false; 
    }

}