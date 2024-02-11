#pragma once
#include "figure03.h"

class Parallelogramm : public Figure
{
public:
    Parallelogramm(double a, double b, double c, double d, double A, double B, double C, double D)
    {
        name = std::string("Параллелограмм");
        sides.push_back(a);
        sides.push_back(b);
        sides.push_back(c);
        sides.push_back(d);
        angles.push_back(A);
        angles.push_back(B);
        angles.push_back(C);
        angles.push_back(D);
    }
};