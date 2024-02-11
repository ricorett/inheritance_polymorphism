#pragma once
#include "parallelogram.h"


class Square : public Parallelogramm
{
public:
    Square(double a) : Parallelogramm(a, a, a, a, 90, 90, 90, 90)
    {
        name = std::string("Квадрат");
    }
};