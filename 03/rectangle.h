#pragma once
#include "parallelogram.h"

class Rectangle : public Parallelogramm
{
public:
    Rectangle(double a, double b) : Parallelogramm(a, b, a, b, 90, 90, 90, 90)
    {
        name = std::string("Прямоугольник");
    }

};