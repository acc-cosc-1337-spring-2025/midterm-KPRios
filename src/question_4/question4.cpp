//
#include "question4.h"
#include <vector>

std::vector<double> get_cookie_ingredients(int cookies_to_bake) {
    // Recipe for 48 cookies
    const double sugar_for_48 = 1.5; // cups
    const double butter_for_48 = 1.0; // cups
    const double flour_for_48 = 2.75; // cups

    double multiplier = static_cast<double>(cookies_to_bake) / 48.0;

    double sugar = sugar_for_48 * multiplier;
    double butter = butter_for_48 * multiplier;
    double flour = flour_for_48 * multiplier;

    return {sugar, butter, flour};
}

bool test_config() {
    return true;
}
