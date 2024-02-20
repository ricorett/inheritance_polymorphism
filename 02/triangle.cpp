#include "triangle.h"

 Triangle::Triangle(double a, double b, double c, double A, double B, double C){
                sides.push_back(a);
                sides.push_back(b);
                sides.push_back(c);
                angles.push_back(A);
                angles.push_back(B);
                angles.push_back(C);
                name = std::string("Треугольник");
                if (get_side_count() != 3){
                    throw "Некорректное количество сторон";
                }
                int sum = angles[0] + angles[1] + angles[2];
                if (!(FLOAT_EQUALS(180,sum))) {
                    throw "Сумма углов не равна 180";
                }

        }

void Triangle::print_info() 
    {
        std::cout << name << ":" << std::endl;
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
