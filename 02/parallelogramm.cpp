#include "parallelogramm.h"
 Parallelogramm::Parallelogramm(double a, double b, double c, double d, double A, double B, double C, double D){
        name = std::string("Параллелограмм");
        sides.push_back(a);
        sides.push_back(b);
        sides.push_back(c);
        sides.push_back(d);
        angles.push_back(A);
        angles.push_back(B);
        angles.push_back(C);
        angles.push_back(D);
     if (get_side_count() != 4){
         throw "Некорректное количество сторон";
     }
//     int sum = angles[0] + angles[1] + angles[2] + angles[3];
//     if (!(FLOAT_EQUALS(360,sum))) {
//         throw "Сумма углов не равна 360";
//     }
//     if(sides[0] != sides[2] || sides[1] != sides[3]){
//         throw  "Стороны попарно не равны";
//     }
//     if(angles[0] != angles[2] || angles[1] != angles[3]){
//         throw  "Углы попарно не равны";
//     }
   }

void Parallelogramm::print_info()
    {
        std::cout << name << ":" << std::endl;
        std::cout << "Количество сторон: " << sides.size() << std::endl;
        std::cout << "Стороны: ";
        std::cout << "a=" << sides[0] << " ";
        std::cout << "b=" << sides[1] << " ";
        std::cout << "c=" << sides[2] << " ";
        std::cout << "d=" << sides[3] << " ";
        std::cout << std::endl << "Углы: ";
        std::cout << "A=" << angles[0] << " ";
        std::cout << "B=" << angles[1] << " ";
        std::cout << "C=" << angles[2] << " ";
        std::cout << "D=" << angles[3] << " ";
        std::cout << std::endl;
    }