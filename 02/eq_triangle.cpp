#include "eq_triangle.h" 
 
 Equilateral_triangle::Equilateral_triangle(double a, double A) : Triangle(a, a, a, A, A, A)
    {
        name = std::string("Равносторонний треугольник");
    }