#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question4.h"

TEST_CASE("Test get_cookie_ingredients function", "[get_cookie_ingredients]") {

    SECTION("48 cookies should return 1.5 cups sugar, 1 cup butter, 2.75 cups flour") {
        std::vector<double> ingredients = get_cookie_ingredients(48);
        REQUIRE(ingredients[0] == 1.5);  // sugar
        REQUIRE(ingredients[1] == 1.0);  // butter
        REQUIRE(ingredients[2] == 2.75); // flour
    }

    SECTION("96 cookies should return 3 cups sugar, 2 cups butter, 5.5 cups flour") {
        std::vector<double> ingredients = get_cookie_ingredients(96);
        REQUIRE(ingredients[0] == 3.0);  // sugar
        REQUIRE(ingredients[1] == 2.0);  // butter
        REQUIRE(ingredients[2] == 5.5);  // flour
    }

    SECTION("24 cookies should return 0.75 cups sugar, 0.5 cups butter, 1.375 cups flour") {
        std::vector<double> ingredients = get_cookie_ingredients(24);
        REQUIRE(ingredients[0] == 0.75);  // sugar
        REQUIRE(ingredients[1] == 0.5);   // butter
        REQUIRE(ingredients[2] == 1.375); // flour
    }

    SECTION("12 cookies should return 0.375 cups sugar, 0.25 cups butter, 0.6875 cups flour") {
        std::vector<double> ingredients = get_cookie_ingredients(12);
        REQUIRE(ingredients[0] == 0.375); // sugar
        REQUIRE(ingredients[1] == 0.25);  // butter
        REQUIRE(ingredients[2] == 0.6875); // flour
    }
}

TEST_CASE("Test test_config function", "[test_config]") {

    SECTION("Verify that test_config returns true") {
        REQUIRE(test_config() == true);  
    }
}
