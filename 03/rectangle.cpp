#include "rectangle.h"

Rectangle::Rectangle(double a, double b): Parallelogramm(a, b, a, b, 90, 90, 90, 90)
    {
        name = std::string("Прямоугольник");
    }

 bool Rectangle::check_state()
    {
        if (!Parallelogramm::check_state()) return false;
        if (!FLOAT_EQUALS(sides[0], sides[2])) return false; 
        if (!FLOAT_EQUALS(sides[1], sides[3])) return false;
        for (int i = 0; i < 4; i++)
            if (!FLOAT_EQUALS(angles[i], 90)) return false;
        return true;
    }