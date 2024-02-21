 #include "isos_triangle.h"
Isosceles_triangle::Isosceles_triangle(double a, double b, double A, double B) : Triangle(a, b, a, A, B, A) {
    name = std::string("Равнобедренный треугольник");
    if (sides[0] != sides[2]) {
        throw FigureError("Стороны а и с не равны, треугольник не равнобедренный");
    }
    if (angles[0] != angles[2]) {
        throw FigureError("Углы А и С не равны, треугольник не равнобедренный");
    }
}