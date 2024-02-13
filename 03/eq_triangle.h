#pragma once
#include "triangle.h"


class Equilateral_triangle : public Triangle 
{
public:

    Equilateral_triangle(double a, double A);
    bool check_state() override;

};

