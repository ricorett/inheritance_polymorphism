#include "rhombus.h"   
   
   Rhombus::Rhombus(double a, double A, double B) : Parallelogramm(a, a, a, a, A, B, A, B)
    {
        name = std::string("Ромб");
        if(angles[0] != angles[2] || angles[1] != angles[3]){
            throw FigureError("Углы попарно не равны");
        }
    }