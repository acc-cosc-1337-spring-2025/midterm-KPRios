#include <iostream>
#include "question1.h"

int main() {
    
    if (!test_config()) {
        std::cerr << "Configuration test failed!" << std::endl;
        return 1;  
    }

    double gpa;
    std::string letter_grade;
    char continue_choice;

    do {
        
        std::cout << "Enter GPA (0 to 4): ";
        std::cin >> gpa;

        
        if (gpa >= 0 && gpa <= 4) {
            
            letter_grade = gpa_to_letter_grade(gpa);
            std::cout << "Letter grade: " << letter_grade << std::endl;
        } else {
            std::cout << "Please enter a GPA between 0 and 4." << std::endl;
        }

        // Ask if the user wants to continue
        std::cout << "Do you want to enter another GPA? (y/n): ";
        std::cin >> continue_choice;

    } while (continue_choice == 'y' || continue_choice == 'Y');

    std::cout << "Exiting the program." << std::endl;
    return 0;
}