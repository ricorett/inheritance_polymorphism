#include "figure.hpp"


int main(){
    Triangle t;
    Figure f;
    Quadrilateral q;
    std::cout << "Количество сторон фигуры: \n";
    std::cout << "Фигура: ";
    f.print_number();
    std::cout << "Треугольник: ";
    t.print_number();
    std::cout << "Четырехугольник: ";
    q.print_number();
    return 0;
}