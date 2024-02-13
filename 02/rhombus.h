#pragma once
#include "rectangle.h"

class Rhombus : public Parallelogramm
{
public:
    Rhombus(double a, double A, double B);
    void print_info() override;
};