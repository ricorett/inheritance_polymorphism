#pragma once
#include "triangle.h"


// class Equilateral_triangle : public Triangle{
// public:
//     Equilateral_triangle(double a, double A) : Triangle(a,  a, a, A, A, A ){
//         name = std::string("Равносторонний треугольник");
//     }
    
// };
class Equilateral_triangle : public Triangle
{
public:
    /*
    * Чтобы заюзать равносторонний треугольник, надо его создать. Где мы создаем объект?
    * В конструкторе. Одна сторона, один угол. 
    */
    Equilateral_triangle(double a, double A) : Triangle(a, a, a, A, A, A)
    {
        name = std::string("Равносторонний треугольник");
    }
};
