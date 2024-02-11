#pragma once
#include "triangle.h"

class Right_Triangle : public Triangle
{
public:
    /*
    * Задаем три стороны и два угла, получается. 
    */
    Right_Triangle(float a, float b, float c, float A, float B) : Triangle(a, b, c, A, B, 90)
    {
        name = std::string("Прямоугольный треугольник");
    }
};