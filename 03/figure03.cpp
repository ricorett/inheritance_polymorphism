#include "figure03.h"


 bool Figure::check_state() {
     if (sides.size() == 0 || angles.size() == 0)
         return false;
     int tmp = sides[0];
     for (int i = 0; i < sides.size(); ++i) {
        if (tmp != sides[i]) {
           return false;
        }
     }
     tmp = angles[0];
     for (int i = 0; i < angles.size(); ++i) {
        if (tmp != angles[i]) {
           return false;
        }
     }
    return true;
}
