#pragma once
#include <iostream>

class Figure{

public:
        Figure(int a, int b, int c, int d, int A, int B, int C, int D){
        side_number = 0;
        a = 0;
        b = 0;
        c = 0;
        A = 0;
        B = 0;
        C = 0;
        };

        // void print_number(){ std::cout << side_number << std::endl; };
        int get_side(int);        
        int get_angle(int);

protected:
        int side_number;
        int a,b,c;
        int A,B,C; // углы
};


void print_info();

