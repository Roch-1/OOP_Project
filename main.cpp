# include "Item.h"
# include "Category.h"
# include <iostream>
# include <string>
# include "User.h"
# include "Customer.h"
# include "Staff.h"
#include <limits>
#include <stdexcept>




int main() {


    // import list of items first 
    // update to change automatically when new entry added? 
    // size based on number of lines in file 
    Category stationary(6);
    Item* stationary_list = new Item[6]; 
    stationary_list = stationary.set_list("stationary.txt"); 

    Category clothes(8);
    Item* clothes_list = new Item[8]; 
    clothes_list = clothes.set_list("clothes.txt"); 

    Category food(10);
    Item* food_list = new Item[10]; 
    food_list = food.set_list("food.txt"); 

    Category hygiene(6); 
    Item* hygiene_list = new Item[6]; 
    hygiene_list = hygiene.set_list("hygiene.txt");


    std::cout<<std::endl;
    std::cout << "Hi there. Are you a 1. Customer " << std::endl;
    std::cout << "                    2. A staff  " << std::endl;
    std::cout << "                    3. Done "     << std::endl<<std::endl;

    std::cout << "Answer:";


    // user enter 1 or 2
    // using if statements, match 1 to customer object and 2 to staff object
    // error message if user enter something that isnt 1 or 2 

    //create varible to store the user answer
    std::string user_answer;
    std::cin >> user_answer; 

    //making condition  to check answer
    while ((user_answer != "1") && (user_answer != "2") && (user_answer != "3")) {
        std::cout << "Invalid input. Pick between: " << std::endl;
        std::cout << "1. Customer " << std::endl;
        std::cout << "2. A staff " << std::endl;
        std::cout << "3. Back " << std::endl<<std::endl;
        
        // clear out input 
        std::cin.clear(); 
        std::cin.ignore(std::numeric_limits < std::streamsize >::max(),'\n'); 
        
        std::cout << "Answer: ";
        std::cin >> user_answer;
    }

    // clear out input 
    std::cin.clear(); 
    std::cin.ignore(std::numeric_limits < std::streamsize >::max(),'\n');

    if(user_answer=="1"){

        Customer person; 

        bool category_done = false;

        // choose which list it is and size of list 
        Item* item_list = new Item; 

        while(!category_done){

            //question ouput
            std::cout<<std::endl;
            std::cout<<std::endl;
            std::cout<<"Q: which category do you want to view? "<<std::endl;
            std::cout<<"   1.Stationary"                          <<std::endl;
            std::cout<<"   2.Clothes"                             <<std::endl;
            std::cout<<"   3.Food"                                <<std::endl;
            std::cout<<"   4.Hygiene"                             <<std::endl;
            std::cout<<"   5.done"                                <<std::endl << std::endl << std::endl;
            
            //variable to store input
            std::string category_input;

            std::cout<< "Answer: ";
            std::cin >> category_input;

            // verify input
            while ((category_input != "1") && (category_input != "2") && (category_input != "3") && (category_input != "4") && (category_input != "5")) {
                std::cout<< std::endl << "Invalid input. Choose from the following options: "<<std::endl;
                std::cout<<"   1.Stationary"                          <<std::endl;
                std::cout<<"   2.Clothes"                             <<std::endl;
                std::cout<<"   3.Food"                                <<std::endl;
                std::cout<<"   4.Hygiene"                             <<std::endl; 
                std::cout<<"   5.done"                                <<std::endl;

                // clear out input 
                std::cin.clear(); 
                std::cin.ignore(std::numeric_limits < std::streamsize >::max(),'\n');
                
                std::cout<< std::endl << "Answer: ";
                std::cin >> category_input;
                
            }

            // clear out input
            std::cin.clear(); 
            std::cin.ignore(std::numeric_limits < std::streamsize >::max(),'\n');

            int list_size = 0; 
            
            std::cout <<std::endl; 

            if(category_input=="1"){
                item_list = stationary_list; 
                list_size = 6; 

                person.display_items(item_list,6); 
                stationary_list = item_list;   

            }
            else if(category_input=="2"){
                item_list = clothes_list; 
                list_size = 8; 

                person.display_items(item_list,8);

            }
            else if(category_input=="3"){
                item_list = food_list; 
                list_size = 10; 

                person.display_items(item_list,10);

            }
            else if(category_input=="4"){
                item_list = hygiene_list; 
                list_size = 6; 

                person.display_items(item_list,6);


            }
            else if(category_input=="5"){  
                //output done
                std::cout<<std::endl; 
                std::cout<<"Thank you for using the sytem." <<std::endl;
                
                //to break the loop
                category_done= true;

            }

            // now that we print out all items in the category
            // pick an item from it 

            // 0 = done
            // item 1 is index 0 in the array

            if (!category_done) {
                std::cout << "Enter the number of the item you want. " << std::endl; 

                int item_number; 

                while (!(std::cin >> item_number)) {
                    std::cout << std::endl << "Invalid. Try again. " << std::endl;
                    std::cout << "Answer: ";

                    // clear out input 
                    std::cin.clear(); 
                    std::cin.ignore(std::numeric_limits < std::streamsize >::max(),'\n');
                }
                
                // verify range
                while (item_number < 0 || item_number > list_size) {
                    std::cout << std::endl << "Invalid. Try again. " << std::endl;

                    std::cin.clear(); 
                    std::cin.ignore(std::numeric_limits < std::streamsize >::max(),'\n');

                    std::cout << "Answer: "; 
                    while (!(std::cin >> item_number)) {
                        std::cout << std::endl << "Invalid. Try again. " << std::endl;
                        std::cout << "Answer: "; 

                        // clear out input 
                        std::cin.clear(); 
                        std::cin.ignore(std::numeric_limits < std::streamsize >::max(),'\n'); 
                    }
                }

                std::cin.clear(); 
                std::cin.ignore(std::numeric_limits < std::streamsize >::max(),'\n');

                // loop through this list and get input

                std::cout << "Choose from the following options." << std::endl;
                std::cout << "1. Add to cart " << std::endl;
                std::cout << "2. Cancel" << std::endl;
                std::cout << std::endl << "Answer: " << std::endl; 
                
                // user make a choice 
                int option_number = 0; 
                
                // verify this input ok 
                while (!(std::cin >> option_number)) {
                    std::cout << std::endl << "Invalid. Try again. " << std::endl;

                    // clear out input 
                    std::cin.clear(); 
                    std::cin.ignore(std::numeric_limits < std::streamsize >::max(),'\n'); 
                }
                
                // made choice 
                // person.choice(option_number, item_list[item_number-1]); 
                while (!person.choice(option_number, &item_list[item_number-1])) {
                    std::cout << "Choose between 1 and 2 only " << std::endl; 
                    while (!(std::cin >> option_number)) {
                        std::cout << std::endl << "Invalid. Try again. " << std::endl;

                        // clear out input 
                        std::cin.clear(); 
                        std::cin.ignore(std::numeric_limits < std::streamsize >::max(),'\n'); 
                    }
                }
                
                // done with the variable, so clear it 
                std::cin.clear(); 
                std::cin.ignore(std::numeric_limits < std::streamsize >::max(),'\n');
            } 
        }
        person.finish();
    }
    else if(user_answer=="2"){
        Staff person;
        bool category_done = false;

        while(!category_done){

            //question ouput
            std::cout<<std::endl;
            std::cout<<std::endl;
            std::cout<<"Q: which category do you want to view? "<<std::endl;
            std::cout<<"   1.Stationary"                          <<std::endl;
            std::cout<<"   2.Clothes"                             <<std::endl;
            std::cout<<"   3.Food"                                <<std::endl;
            std::cout<<"   4.Hygiene"                             <<std::endl;
            std::cout<<"   5.done"                                <<std::endl << std::endl << std::endl;
            
            //variable to store input
            std::string category_input;

            std::cout<< "Answer: ";
            std::cin >> category_input;

            // verify input
            while ((category_input != "1") && (category_input != "2") && (category_input != "3") && (category_input != "4") && (category_input != "5")) {
                std::cout<< std::endl << "Invalid input. Choose from the following options: "<<std::endl;
                std::cout<<"   1.Stationary"                          <<std::endl;
                std::cout<<"   2.Clothes"                             <<std::endl;
                std::cout<<"   3.Food"                                <<std::endl;
                std::cout<<"   4.Hygiene"                             <<std::endl; 
                std::cout<<"   5.done"                                <<std::endl;

                // clear out input 
                std::cin.clear(); 
                std::cin.ignore(std::numeric_limits < std::streamsize >::max(),'\n');
                
                std::cout<< std::endl << "Answer: ";
                std::cin >> category_input;
                
            }

            // clear out input 
            std::cin.clear(); 
            std::cin.ignore(std::numeric_limits < std::streamsize >::max(),'\n');


            // choose which list it is and size of list 
            Item* item_list = new Item; 
            
            int list_size = 0; 
            
            std::cout <<std::endl; 

            if(category_input=="1"){
                item_list = stationary_list; 
                list_size = 6; 

                person.display_items(stationary_list,6);     

            }
            else if(category_input=="2"){
                item_list = clothes_list; 
                list_size = 8; 

                person.display_items(clothes_list,8);

            }
            else if(category_input=="3"){
                item_list = food_list; 
                list_size = 10; 

                person.display_items(food_list,10);

            }
            else if(category_input=="4"){
                item_list = hygiene_list; 
                list_size = 6; 

                person.display_items(hygiene_list,6);


            }
            else if(category_input=="5"){  
                //output done
                std::cout<<std::endl; 
                std::cout<<"Thank you for using the sytem." <<std::endl;
                
                //to break the loop
                category_done= true;

            }

            // now that we print out all items in the category
            // pick an item from it 

            // 0 = done
            // item 1 is index 0 in the array

            if (!category_done) {
                std::cout << "Enter the number of the item you want. " << std::endl; 

                int item_number; 

                while (!(std::cin >> item_number)) {
                    std::cout << std::endl << "Invalid. Try again. " << std::endl;
                    std::cout << "Answer: ";

                    // clear out input 
                    std::cin.clear(); 
                    std::cin.ignore(std::numeric_limits < std::streamsize >::max(),'\n');
                }
                
                // verify range
                while (item_number < 0 || item_number > list_size) {
                    std::cout << std::endl << "Invalid. Try again. " << std::endl;

                    std::cin.clear(); 
                    std::cin.ignore(std::numeric_limits < std::streamsize >::max(),'\n');

                    std::cout << "Answer: "; 
                    while (!(std::cin >> item_number)) {
                        std::cout << std::endl << "Invalid. Try again. " << std::endl;
                        std::cout << "Answer: "; 

                        // clear out input 
                        std::cin.clear(); 
                        std::cin.ignore(std::numeric_limits < std::streamsize >::max(),'\n'); 
                    }
                }

                std::cin.clear(); 
                std::cin.ignore(std::numeric_limits < std::streamsize >::max(),'\n');

                // loop through this list and get input

                std::cout << "Choose from the following options." << std::endl;
                std::cout << "1. Add item " << std::endl;
                std::cout << "2. Remove item" << std::endl;
                std::cout << "3. Cancel" << std::endl;
                std::cout << std::endl << "Answer: " << std::endl; 
                
                // user make a choice 
                int option_number = 0; 
                
                // verify this input ok 
                while (!(std::cin >> option_number)) {
                    std::cout << std::endl << "Invalid. Try again. " << std::endl;

                    // clear out input 
                    std::cin.clear(); 
                    std::cin.ignore(std::numeric_limits < std::streamsize >::max(),'\n'); 
                }
                
                // made choice 
                // person.choice(option_number, item_list[item_number-1]); 
                while (!person.choice(option_number, &item_list[item_number-1])) {
                    std::cout << "Choose between 1, 2, or 3 only " << std::endl; 
                    while (!(std::cin >> option_number)) {
                        std::cout << std::endl << "Invalid. Try again. " << std::endl;

                        // clear out input 
                        std::cin.clear(); 
                        std::cin.ignore(std::numeric_limits < std::streamsize >::max(),'\n'); 
                    }
                }
                
                // done with the variable, so clear it 
                std::cin.clear(); 
                std::cin.ignore(std::numeric_limits < std::streamsize >::max(),'\n');
                
            } 
        }
    
    }
    else if(user_answer=="3"){
        
        std::cout << std::endl; 
        std::cout << "Thank You for using the system :) " << std::endl;
        
    }
    
    
    // delete 
    delete stationary_list;
    delete clothes_list;
    delete food_list;
    delete hygiene_list;
}