#include "question1.h"

// Function to convert GPA to letter grade
std::string gpa_to_letter_grade(double gpa) {
    if (gpa >= 3.5 && gpa <= 4) {
        return "A";
    } else if (gpa >= 3 && gpa < 3.5) {
        return "B";
    } else if (gpa >= 2 && gpa < 3) {
        return "C";
    } else if (gpa >= 1 && gpa < 2) {
        return "D";
    } else if (gpa >= 0 && gpa < 1) {
        return "F";
    } else {
        return "Invalid GPA";  // In case GPA is out of range
    }
}

// Provided test_config function
bool test_config() {
    return true;  // Always returns true, configuration is valid
}