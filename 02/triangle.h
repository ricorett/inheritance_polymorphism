#pragma once
#include "figure02.h"

class Triangle : public Figure{

public:
        Triangle(double a, double b, double c, double A, double B, double C){
                sides.push_back(a);
                sides.push_back(b);
                sides.push_back(c);
                angles.push_back(A);
                angles.push_back(B);
                angles.push_back(C);
                name = std::string("Треугольник");

        }
};