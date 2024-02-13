#pragma once
#include "parallelogramm.h"

class Rectangle : public Parallelogramm
{
public:
    Rectangle(double a, double b);   
    void print_info() override;
    bool check_state() override;
};