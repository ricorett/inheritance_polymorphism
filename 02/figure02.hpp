#ifndef FIGURE_02_HPP
#define FIGURE_02_HPP

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


class Triangle : public Figure{

public:
        Triangle(){
        side_number = 3;
        };
        bool angelsSum();
        
};

class Rectangular_triangle : public Triangle{};
class Isosceles_triangle : public Triangle{};
class Equilateral_triangle : public Triangle{};

class Rectangle : public Figure{

public:
    int d;
    int D;
    Rectangle(){
        side_number = 4;
        };
};

class Square : public Rectangle {};

class Parallelogram : Rectangle{};
class Rhombus : Rectangle{};

void print_info();

#endif //FIGURE_02_HPP