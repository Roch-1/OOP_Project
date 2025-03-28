
   //create variable to loop
    int update_done=1;

    while(update_done!=0){

        //question ouput
        std::cout<<std::endl;
        std::cout<<std::endl;
        std::cout<<"Q: which category do you want to update? "<<std::endl;
        std::cout<<"   1.Stationary"                          <<std::endl;
        std::cout<<"   2.Clothes"                             <<std::endl;
        std::cout<<"   3.Food"                                <<std::endl;
        std::cout<<"   4.Hygiene"                             <<std::endl;
        std::cout<<"   5.done"                                <<std::endl;
        
        //variable to store input
        int category_input;
        
        //variable to prevent all the thing coming out 
        int a1;

        //output
        std::cout<<std::endl;
        std::cout<<"Answer: ";

        //input
        std::cin>>category_input;

        if(category_input==1){
            // stationary
            // print out all the list in statitonary
            person.display_items(stationary_list, 6); 

                int done=0;

                while(done!=1){

                    

                    std::cout<<std::endl;
                    std::cout<<std::endl;
                    std::cout<<std::endl;
                    std::cout<<"Q: which item do you want to update? "<<std::endl;
                    std::cout<<"   1.pen"                                 <<std::endl;
                    std::cout<<"   2.pencil"                              <<std::endl;
                    std::cout<<"   3.eraser"                              <<std::endl;
                    std::cout<<"   4.ruler"                               <<std::endl;
                    std::cout<<"   5.marker"                              <<std::endl;
                    std::cout<<"   6.tape"                                <<std::endl;
                    std::cout<<"   7.done"                                <<std::endl;

                    int u_input;

                    //output
                    std::cout<<std::endl;
                    std::cout<<"Answer: ";

                    //input
                    std::cin>>u_input;

                    if(u_input==1){

                        int done=0;

                        while(done!=0){

                            std::cout<<"Q: what do you want to do? "<<std::endl;
                            std::cout<<"   1.increase item"                                 <<std::endl;
                            std::cout<<"   2.decrease item"                                 <<std::endl;
                            std::cout<<"   3.done"                                          <<std::endl;

                            int item_update;

                            //output
                            std::cout<<std::endl;
                            std::cout<<"Answer: ";

                            //input
                            std::cin>>item_update;

                            if(item_update==1){

                                std::cout<<"Q: how much do you want to add? "<<endl;

                                int num_add;

                                std::cin>>num_add;

                                

                                for(int i=0; i<num_add;i++){

                                    int index=1;

                                    cout<<index<<".";
                                        
                                    person.choice(1, stationary_list[0]);

                                    index++;


                                }





                            }else if(item_update==2){
                                
                                std::cout<<"Q: how much do you want to decrease? "<<endl;

                                int num_decrease;

                                if(num_decrease<=stationary_list[0].get_current_quantity()){

                                    for(int i=0; i<num_decrease;i++){

                                        int index=1;

                                        cout<<index<<".";
                                        
                                        person.choice(2, stationary_list[0]);
                                        

                                    }

                                }else{

                                    std::cout<<"please enter between 1 to 100"<<std::endl;

                                }

                            }else if(item_update==3){

                                person.choice(3, statinary_list[0]); 


                                
                            }else{

                            }





                        }








                    }else if(u_input==2){
                        

                    }else if(u_input==3){

                    }else if(u_input==4){

                    }else if(u_input==5){

                    }else if(u_input==6){

                    }else if(u_input==7){

                    }else{

                    }




                }
            

            

        }else if(c_input==2){

            std::cout<<std::endl;
            std::cout<<std::endl;
            std::cout<<std::endl;

            

            // to prevent the output coming out together
            std::cout<<"press 1 and ENTER to continue : ";
            std::cin>>a1;
            std::cout<<std::endl;


        }else if(c_input==3){

            std::cout<<std::endl;
            std::cout<<std::endl;
            std::cout<<std::endl;

            
            // to prevent the output coming out together
            std::cout<<"press 1 and ENTER to continue : ";
            std::cin>>a1;
            std::cout<<std::endl;


        }else if(c_input==4){

            std::cout<<std::endl;
            std::cout<<std::endl;
            std::cout<<std::endl;

           
            // to prevent the output coming out together
            std::cout<<"press 1 and ENTER to continue : ";
            std::cin>>a1;
            std::cout<<std::endl;


        }else if(c_input==5){
            
            //to break the loop
            update_done=0;
            //output
            std::cout<<std::endl;
            std::cout<<std::endl;
            std::cout<<"Done"<<std::endl;

        }else{
            std::cout<<"Please enter number between 1 to 5"<<std::endl;

            // to prevent the output coming out together
            std::cout<<"press ENTER to continue";
            std::cin>>a1;
            std::cout<<std::endl;

        }



    }

    
