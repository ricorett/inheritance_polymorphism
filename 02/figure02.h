#pragma once
#include <iostream>

class Figure{

public:
        Figure(){
        side_number = 0;
        a = 0;
        b = 0;
        c = 0;
        A = 0;
        B = 0;
        C = 0;
        };
        // void print_number(){ std::cout << side_number << std::endl; };
        int get_side_a();
        int get_side_b();
        int get_side_c();
        int get_angle_a();
        int get_angle_b();
        int get_angle_c();
       
protected:
        int side_number;
        int a,b,c;
        int A,B,C; // углы
};


void print_info();

