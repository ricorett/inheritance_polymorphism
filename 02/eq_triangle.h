#pragma once
#include "triangle.h"


class Equilateral_triangle : public Triangle 
{
public:

    Equilateral_triangle(double a, double A);
    void print_info() override;
};

