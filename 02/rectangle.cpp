#include "rectangle.h"

Rectangle::Rectangle(double a, double b): Parallelogramm(a, b, a, b, 90, 90, 90, 90)
    {
        name = std::string("Прямоугольник");
        if(sides[0] != sides[2] || sides[1] != sides[3]){
            throw  "Стороны попарно не равны";
        }
        if(angles[0] != angles[2] || angles[1] != angles[3]){
            throw  "Углы попарно не равны";
        }
        if(angles[0] != 90 || angles[1] != 90 || angles[2] != 90 || angles[3] != 90){
            throw "Один из углов не равен 90";
        }
    }

