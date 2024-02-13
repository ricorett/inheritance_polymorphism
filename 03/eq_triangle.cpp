#include "eq_triangle.h" 
 
 Equilateral_triangle::Equilateral_triangle(double a, double A) : Triangle(a, a, a, A, A, A)
    {
        name = std::string("Равносторонний треугольник");
    }


 bool Equilateral_triangle::check_state()
    {
        if (!Triangle::check_state()) return false; 
        if (!FLOAT_EQUALS(sides[0], sides[1])) return false;
        if (!FLOAT_EQUALS(sides[0], sides[2])) return false;
        for (int i = 0; i < 3; i++)
            if (!FLOAT_EQUALS(angles[i], 60)) return false;
        return true; 
    }