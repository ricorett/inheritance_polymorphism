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
    }

bool Parallelogramm::check_state()
    {
        if (sides.size() != 4) return false;
        double summ = 0;
        for (int i = 0; i < 4; i++) summ += angles[i];
        if (!FLOAT_EQUALS(360, summ)) return false; 
        return true;
    }

void Parallelogramm::print_info()
    {
        std::cout << name << ":" << std::endl;
        std::cout << (check_state() ? "правильная" : "неправильная") << std::endl;
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