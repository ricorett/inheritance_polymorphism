#pragma once
#include "triangle.h"

class Right_Triangle : public Triangle
{
public:

    Right_Triangle(float a, float b, float c, float A, float B);
    bool check_state() override;
    void print_info() override;
};