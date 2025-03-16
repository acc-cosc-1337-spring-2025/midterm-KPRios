#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"

// Test cases for the get_earned_points function
TEST_CASE("Test Points Earned for Widgets Sold", "[get_earned_points]") {

    SECTION("3 widgets sold") {
        REQUIRE(get_earned_points(3) == 3);  
    }

    SECTION("9 widgets sold") {
        REQUIRE(get_earned_points(9) == 45);  
    }

    SECTION("11 widgets sold") {
        REQUIRE(get_earned_points(11) == 110); 
    }

    SECTION("20 widgets sold") {
        REQUIRE(get_earned_points(20) == 300);  
    }

    SECTION("Invalid case for 0 widgets sold") {
        REQUIRE(get_earned_points(0) == 0);  
    }
}

