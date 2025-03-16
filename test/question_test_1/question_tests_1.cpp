#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"


TEST_CASE("Verify Test Configuration", "verification") {
    REQUIRE(true == true);  
}


TEST_CASE("Test Config Function", "verification") {
    REQUIRE(test_config() == true); 
}


TEST_CASE("GPA to Letter Grade Conversion", "[gpa_to_letter_grade]") {

    SECTION("Test for A grade (3.5 to 4.0 GPA)") {
        REQUIRE(gpa_to_letter_grade(3.5) == "A");  
        REQUIRE(gpa_to_letter_grade(4.0) == "A");   
    }

    SECTION("Test for B grade (3.0 to 3.49 GPA)") {
        REQUIRE(gpa_to_letter_grade(3.0) == "B");  
        REQUIRE(gpa_to_letter_grade(3.49) == "B"); 
    }

    SECTION("Test for C grade (2.0 to 2.99 GPA)") {
        REQUIRE(gpa_to_letter_grade(2.0) == "C");  
        REQUIRE(gpa_to_letter_grade(2.99) == "C"); 
    }

    SECTION("Test for D grade (1.0 to 1.99 GPA)") {
        REQUIRE(gpa_to_letter_grade(1.0) == "D");  
        REQUIRE(gpa_to_letter_grade(1.99) == "D"); 
    }

    SECTION("Test for F grade (0.0 to 0.99 GPA)") {
        REQUIRE(gpa_to_letter_grade(0.0) == "F");  
        REQUIRE(gpa_to_letter_grade(0.99) == "F"); 
    }

    SECTION("Test for invalid GPA") {
        REQUIRE(gpa_to_letter_grade(5.0) == "Invalid GPA");   
        REQUIRE(gpa_to_letter_grade(-1.0) == "Invalid GPA");  
    }
}