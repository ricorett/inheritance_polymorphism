#pragma once
#include "figure02.h"

class Triangle : public Figure{

public:
        Triangle(double a, double b, double c, double A, double B, double C);
        void print_info() override;
};