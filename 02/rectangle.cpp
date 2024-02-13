#include "rectangle.h"

Rectangle::Rectangle(double a, double b): Parallelogramm(a, b, a, b, 90, 90, 90, 90)
    {
        name = std::string("Прямоугольник");
    }
