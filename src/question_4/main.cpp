#include <iostream>
#include <vector>
#include "question4.h"

int main() {
    int cookies_to_bake;
    char continue_input = 'y';

    while (continue_input == 'y' || continue_input == 'Y') {
        std::cout << "Enter the number of cookies to bake: ";
        std::cin >> cookies_to_bake;

        if (cookies_to_bake <= 0) {
            std::cout << "Invalid input. Please enter a number greater than 0." << std::endl;
        } else {
            std::vector<double> ingredients = get_cookie_ingredients(cookies_to_bake);

            std::cout << "Cups of Sugar: " << ingredients[0] << std::endl;
            std::cout << "Cups of Butter: " << ingredients[1] << std::endl;
            std::cout << "Cups of Flour: " << ingredients[2] << std::endl;
        }

        std::cout << "Do you want to enter another number of cookies? (y/n): ";
        std::cin >> continue_input;
    }

    std::cout << "Goodbye!" << std::endl;
    return 0;
}
