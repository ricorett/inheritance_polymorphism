#include "figure03.h"


bool Figure::check_state(bool state){
    if ((a != b) || (b != c) || (c != d) || (a != d)){
        return false; 
    }
    return true;
}