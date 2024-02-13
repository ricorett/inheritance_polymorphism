#include "triangle.h"

 Triangle::Triangle(double a, double b, double c, double A, double B, double C){
                sides.push_back(a);
                sides.push_back(b);
                sides.push_back(c);
                angles.push_back(A);
                angles.push_back(B);
                angles.push_back(C);
                name = std::string("Треугольник");

        }

    void Triangle::print_info() 
    {
        std::cout << name << ":" << std::endl;
        std::cout << (check_state() ? "правильная" : "неправильная") << std::endl;
        std::cout << "Количество сторон: " << sides.size() << std::endl;
        std::cout << "Стороны: ";
        std::cout << "a=" << sides[0] << " ";
        std::cout << "b=" << sides[1] << " ";
        std::cout << "c=" << sides[2] << " ";
        std::cout << std::endl << "Углы: ";
        std::cout << "A=" << angles[0] << " ";
        std::cout << "B=" << angles[1] << " ";
        std::cout << "C=" << angles[2] << " ";
        std::cout << std::endl;
    }

    bool Triangle::check_state(){
        if (sides.size() != 3) return false;
        double summ = 0;
        for (int i = 0; i < 3; i++) summ += angles[i];
        if (!FLOAT_EQUALS(180, summ)) return false; 
    return true;
    }