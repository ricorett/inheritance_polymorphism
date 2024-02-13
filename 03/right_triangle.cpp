#include "right_triangle.h"


Right_Triangle::Right_Triangle(float a, float b, float c, float A, float B) : Triangle(a, b, c, A, B, 90)
    {
        name = std::string("Прямоугольный треугольник");
    }

bool Right_Triangle::check_state(){
        if (!Triangle::check_state()) return false;
        if (!FLOAT_EQUALS(angles[2], 90)) return false; 
        return true;
    }