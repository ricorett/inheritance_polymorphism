#pragma once
#include "triangle.h"

class Isosceles_triangle : public Triangle
{
public:
    /*
    * Конструктор, создаем треугольник. По-хорошему именно в конструкторе при создании объекта надо проверять
    * что сумма углов = 180 градусов, все эти соотношения, нооо... похуй. И так работает
    */
    Isosceles_triangle(double a, double b, double A, double B) : Triangle(a, b, a, A, B, A)
    {
        name = std::string("Равнобедренный треугольник");
    }
};