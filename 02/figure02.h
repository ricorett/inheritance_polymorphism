#pragma once
#include <iostream>

class Figure{

public:
        int side_number;
        int a,b,c;
        int A,B,C; // углы
        Figure(){
        side_number = 0;
        };
        void print_number(){ std::cout << side_number << std::endl; };
        
};


void print_info();

