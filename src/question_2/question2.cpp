#include "question2.h"

int get_earned_points(int sold) {
    if (sold >= 1 && sold <= 5) {
        return sold * 1;  
    } else if (sold >= 6 && sold <= 10) {
        return sold * 5;  
    } else if (sold >= 11 && sold <= 15) {
        return sold * 10;  
    } else if (sold >= 16) {
        return sold * 15; 
    } else {
        return 0; 
    }
}
