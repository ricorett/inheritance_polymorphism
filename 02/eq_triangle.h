#pragma once
#include "triangle.h"


class Equilateral_triangle : public Triangle //eq
{
public:

    Equilateral_triangle(double a, double A) : Triangle(a, a, a, A, A, A)
    {
        name = std::string("Равносторонний треугольник");
    }
};

