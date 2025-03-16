#include <iostream>
#include "question2.h"

int main() {
    int widgets_sold;
    char continue_input = 'y'; 

    // Loop until user opts out
    while (continue_input == 'y' || continue_input == 'Y') {
    
        std::cout << "Enter number of widgets sold (1 or more): ";
        std::cin >> widgets_sold;

       
        if (widgets_sold < 1) {
            std::cout << "Invalid input. Number of widgets sold must be 1 or more." << std::endl;
        } else {
            
            int points = get_earned_points(widgets_sold);

            
            std::cout << "Points Earned: " << points << std::endl;
        }

        
        std::cout << "Do you want to enter another number of widgets sold? (y/n): ";
        std::cin >> continue_input;
    }

    std::cout << "Goodbye!" << std::endl;
    return 0;
}
