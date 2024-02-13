#include "rhombus.h"

Rhombus::Rhombus(double a, double A, double B) : Parallelogramm(a, a, a, a, A, B, A, B)
    {
        name = std::string("Ромб");
    }

 bool Rhombus::check_state()
    {
        if (!Parallelogramm::check_state()) return false;
        for (int i = 1; i < 4; i++)
            if (!FLOAT_EQUALS(sides[0], sides[i])) return false; 
        if (!FLOAT_EQUALS(angles[0], angles[2])) return false;
        if (!FLOAT_EQUALS(angles[1], angles[3])) return false;
        return true; 
    
         }