#pragma once
#include "triangle.h"

class Equilateral_triangle : public Triangle{
public:
    Equilateral_triangle(int a, int A) : Triangle(int A, int A, int A, int a, int a, int a){
        A = 60;
        a = 30;
    }
};