#pragma once
#include "parallelogramm.h"

class Rectangle : public Parallelogramm
{
public:
    Rectangle(double a, double b);   
    bool check_state() override;
};