#include "right_triangle.h" 

 Right_Triangle::Right_Triangle(float a, float b, float c, float A, float B) : Triangle(a, b, c, A, B, 90)
    {
        name = std::string("Прямоугольный треугольник");
        if(angles[2] != 90){
            throw "Угол С не равен 90!";
        }
    }