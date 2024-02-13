 #include "isos_triangle.h"
Isosceles_triangle::Isosceles_triangle(double a, double b, double A, double B) : Triangle(a, b, a, A, B, A)
{
        name = std::string("Равнобедренный треугольник");
    }