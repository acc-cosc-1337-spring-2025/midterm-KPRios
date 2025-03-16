#include "question3.h"
#include <algorithm> 

std::string decimal_to_hex(int decimal) {
    const char hexDigits[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    std::string hexStr;

    if (decimal == 0) {
        hexStr.push_back('0');
        return hexStr;
    }

    // Convert decimal to hexadecimal
    while (decimal > 0) {
        int remainder = decimal % 16;
        hexStr.push_back(hexDigits[remainder]);  
        decimal /= 16;  
    }

    std::reverse(hexStr.begin(), hexStr.end());

    return hexStr;
}

bool test_config() {
    return true; 
}
