#pragma once
#include "triangle.h"


class Isosceles_triangle : public Triangle
{
public:
   
    Isosceles_triangle(double a, double b, double A, double B) : Triangle(a, b, a, A, B, A)
    {
        name = std::string("Равнобедренный треугольник");
    }
    bool check_state() override;
    void print_info() override;
};