 #include "square.h"
 Square::Square(double a) : Parallelogramm(a, a, a, a, 90, 90, 90, 90)
    {
        name = std::string("Квадрат");
        if(angles[0] != 90 || angles[1] != 90 || angles[2] != 90 || angles[3] != 90){
            throw "Один из углов не равен 90";
        }
        if(sides[0] != sides[1] && sides[1] != sides[2] && sides[2] != sides[3]){
            throw "Стороны не равны";
        }
    }