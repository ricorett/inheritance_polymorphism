#include "eq_triangle.h" 
 
 Equilateral_triangle::Equilateral_triangle(double a, double A) : Triangle(a, a, a, A, A, A)
    {

        name = std::string("Равносторонний треугольник");
        if (!FLOAT_EQUALS(sides[0], sides[1]) || !FLOAT_EQUALS(sides[0], sides[2])) {
            throw FigureError("Не равны стороны в равностороннем треугольнике");
        }
    }

