# include "Item.h"
# include "Category.h"
# include <iostream>
# include <string>
# include "User.h"
# include "Customer.h"
# include "Staff.h"

int main() {
    // test item 
    {
        Item cat("cat", 3, 5, 20);
        if (cat.get_name() != "cat") {
            std::cout << "name doesn't work" << std::endl; 

        }
        // std::cout << "should be 3, actual: " << cat.get_current_quantity() << std::endl;
        if (cat.get_current_quantity() != 3) {
            std::cout << "current quantity error" << std::endl; 
        }

        if (cat.get_max_quantity() != 5) {
            std::cout << "max quantity error" << std::endl; 
        }

        if (cat.get_price() != 20) {
            std::cout << "price error" << std::endl;
        }
        /*
        for (int i = 0; i < 3; i++) {
            // 2 success, 1 fail 
            // std::cout << "round: " << i << std::endl; 
            cat.increase_current_quantity(); 
        }
        
        for (int i = 0; i < 7; i++) {
            // 2 success, 1 fail 
            // std::cout << "round: " << i << std::endl; 
            cat.decrease_current_quantity(); 
        }
        */
    }
    
    {
        int* a = new int[2];
        a[0] = 1;
        a[1] = 2;   
        int* b = new int[2];
        b = a;  
        b[1] = 0; 
        std::cout << "a[1] was 2, now it is " << a[1] << std::endl; 

    }

    {
        Category hygiene(6); 
        // hygiene.set_list("hygiene.txt"); 
        Item* hygiene_list = new Item[6]; 
        hygiene_list = hygiene.set_list("hygiene.txt");
        // soap, 3, 5, 20
        if (hygiene_list[0].get_name() != "soap") {
            std::cout << "name doesn't work" << std::endl;
        }
        
        std::cout << "should be 3, actual: " << hygiene_list[0].get_current_quantity() << std::endl; 
        if (hygiene_list[0].get_current_quantity() != 3) {
            std::cout << "current quantity error" << std::endl; 
        }

        if (hygiene_list[0].get_max_quantity() != 5) {
            std::cout << "max quantity error" << std::endl; 
        }

        if (hygiene_list[0].get_price() != 5) {
            std::cout << "price error" << std::endl;
        }
        // shampoo, 2, 10, 10
        if (hygiene_list[1].get_name() != "shampoo") {
            std::cout << "name error 2" << std::endl;
        }
        std::cout << "should be 2, actual: " << hygiene_list[1].get_current_quantity() << std::endl;
        if (hygiene_list[1].get_current_quantity() != 2) {
            std::cout << "current quantity error 2" << std::endl; 
        }
        hygiene_list[1].increase_current_quantity();
        if (hygiene_list[1].get_current_quantity() != 3) {
            std::cout << "current quantity error 2.2" << std::endl; 
        }

        if (hygiene_list[1].get_max_quantity() != 10) {
            std::cout << "max quantity error 2" << std::endl; 
        }
        if (hygiene_list[1].get_price() != 10) {
            std::cout << "price error 2" << std::endl;
        }

        // toothbrush 5 5 5
        if (hygiene_list[5].get_name() != "toothbrush") {
            std::cout << "name error 6" << std::endl;
        }
        std::cout << "should be 5, actual: " << hygiene_list[5].get_current_quantity() << std::endl;
        if (hygiene_list[5].get_current_quantity() != 5) {
            std::cout << "current quantity error 6" << std::endl; 
        }

        // 
        if (hygiene_list[5].get_max_quantity() != 5) {
            std::cout << "max quantity error 6" << std::endl; 
        }
        if (hygiene_list[5].get_price() != 5) {
            std::cout << "price error 6" << std::endl;
        }

        delete hygiene_list; 
    }

    /*
    {
        Category clothes(8); 
        // clothes.set_list("clothes.txt"); 
        Item* clothes_list = new Item; 
        clothes_list = clothes.set_list("clothes.txt"); 

        // jacket 2 3 40
        if (clothes_list[3].get_name() != "jacket") {
            std::cout << "name doesn't work 3" << std::endl;
        }
        if (clothes_list[3].get_current_quantity() != 2) {
            std::cout << "current quantity error 3" << std::endl; 
        }

        if (clothes_list[3].get_max_quantity() != 3) {
            std::cout << "max quantity error 3" << std::endl; 
        }

        if (clothes_list[3].get_price() != 40) {
            std::cout << "price error 3" << std::endl;
        }
    }
    
    {
        Category clothes(8); 
        // clothes.set_list("clothes.txt"); 
        Item* clothes_list = new Item; 
        clothes_list = clothes.set_list("clothes.txt"); 


        Customer person; 
        person.display_items(clothes_list, 8); 

        person.choice(1, clothes_list[0]); 
        person.choice(1, clothes_list[0]);
        person.choice(2, clothes_list[0]);
        person.choice(1, clothes_list[2]);
        person.finish(); 
    }
    
    {
        Category clothes(8); 
        // clothes.set_list("clothes.txt"); 
        Item* clothes_list = new Item; 
        clothes_list = clothes.set_list("clothes.txt"); 


        Staff person; 
        person.display_items(clothes_list, 8); 

        person.choice(1, clothes_list[0]); 
        person.choice(2, clothes_list[0]);
        person.choice(3, clothes_list[0]);
        person.choice(1, clothes_list[2]);
        person.choice(5, clothes_list[2]);
    }
    */
     
}