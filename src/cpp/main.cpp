/*
 * Author:Muxtorov Dilshod
 * Date:25.10.2023
 */

#include <iostream>
#include "task_1.h"


int main() {
    // std::cout << "Task 1" << std::endl;
    // int year;
    // std::cout<<"Enter a year: ";
    // std::cin>>year;
    // if(is_leap(year)){
    //     std::cout<<"This year is leap!";
    // }else{
    //     std::cout<<"This year is not leap!";
    // }

    std::cout << "Task 2" << std::endl;
    int random_number = rand()%100, guess_number=0;
    pin:
    std::cout<<"Guess the number(between 1 and 100): ";
    std::cin>>guess_number;
    if(random_number>guess_number){
        std::cout<<"too low"<< std::endl;
        goto pin;
    }else if (random_number<guess_number){
        std::cout<<"too high"<< std::endl;
        goto pin;
    }else {
        std::cout<<"You find the number!";
    }


    return 0;
}
