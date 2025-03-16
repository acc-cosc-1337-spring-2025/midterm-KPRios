#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"

TEST_CASE("Test decimal_to_hex function", "[decimal_to_hex]") {

    SECTION("10 should return A") {
        REQUIRE(decimal_to_hex(10) == "A");
    }

    SECTION("170 should return AA") {
        REQUIRE(decimal_to_hex(170) == "AA");
    }

    SECTION("255 should return FF") {
        REQUIRE(decimal_to_hex(255) == "FF");
    }

    SECTION("1 should return 1") {
        REQUIRE(decimal_to_hex(1) == "1");
    }

    SECTION("512 should return 200") {
        REQUIRE(decimal_to_hex(512) == "200");
    }

    SECTION("0 should return 0") {
        REQUIRE(decimal_to_hex(0) == "0");  
    }
}

TEST_CASE("Test test_config function", "[test_config]") {

    SECTION("Verify that test_config returns true") {
        REQUIRE(test_config() == true);  
    }
}
