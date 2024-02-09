#pragma once
#include "figure02.h"

class Triangle : public Figure{

public:
         Triangle(int A, int B, int C, int a, int b, int c) : Figure(3,3){
                a = 10;
                b = 20;
                c = 30;
                A = 50;
                B = 60;
                C = 90;
         };
};