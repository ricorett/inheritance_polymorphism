#include "square.h"

 Square::Square(double a) : Parallelogramm(a, a, a, a, 90, 90, 90, 90)
    {
        name = std::string("Квадрат");
    }

bool Square::check_state()
    {
        if (!Parallelogramm::check_state()) return false;
        for (int i = 1; i < 4; i++)
            if (!FLOAT_EQUALS(sides[0], sides[i])) return false;
        for (int i = 0; i < 4; i++)
            if (!FLOAT_EQUALS(angles[i], 90)) return false;
        return true;
    }