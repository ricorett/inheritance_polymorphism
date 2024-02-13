#include "isos_triangle.h"

bool Isosceles_triangle::check_state()
    {
        if (!Triangle::check_state()) return false;
        if (!FLOAT_EQUALS(sides[0], sides[2])) return false;
        if (!FLOAT_EQUALS(angles[0], angles[2])) return false;
        return true;
    }