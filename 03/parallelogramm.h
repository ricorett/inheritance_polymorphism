#pragma once
#include "figure03.h"

class Parallelogramm : public Figure
{
public:
    Parallelogramm(double a, double b, double c, double d, double A, double B, double C, double D);
    bool check_state() override;
    void print_info() override;
};