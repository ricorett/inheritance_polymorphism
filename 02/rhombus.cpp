#include "rhombus.h"   
   
   Rhombus::Rhombus(double a, double A, double B) : Parallelogramm(a, a, a, a, A, B, A, B)
    {
        name = std::string("Ромб");
    }