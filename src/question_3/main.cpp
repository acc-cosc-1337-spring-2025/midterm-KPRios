
#include <iostream>
#include "question3.h"

int main() {
    int decimal;
    char continue_input = 'y';

    while (continue_input == 'y' || continue_input == 'Y') {
        std::cout << "Enter a decimal number between 1 and 512: ";
        std::cin >> decimal;

        if (decimal < 1 || decimal > 512) {
            std::cout << "Invalid input. Please enter a number between 1 and 512." << std::endl;
        } else {
            std::string hex = decimal_to_hex(decimal);

            std::cout << "Hexadecimal: " << hex << std::endl;
        }

        std::cout << "Do you want to enter another decimal number? (y/n): ";
        std::cin >> continue_input;
    }

    std::cout << "Goodbye!" << std::endl;
    return 0;
}
