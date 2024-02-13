#pragma once
#include "figure02.h"

class Parallelogramm : public Figure
{
public:
    Parallelogramm(double a, double b, double c, double d, double A, double B, double C, double D);
    void print_info() override;
};