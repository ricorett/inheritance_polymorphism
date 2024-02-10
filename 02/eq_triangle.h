#pragma once
#include "triangle.h"
#include <memory>

class Equilateral_triangle : public Triangle{
public:
    Equilateral_triangle(double a, double A) : Triangle(a,  a, a, A, A, A ){
        name = std::string("Равносторонний треугольник");
    }
    
};