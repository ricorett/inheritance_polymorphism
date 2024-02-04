#ifndef FIGURE_HPP
#define FIGURE_HPP


#include <iostream>

class Figure{

public:
        Figure(){
       int side_number = 0;
        std::cout << "Фигура: " << side_number << std::endl;
        };
        

private:
        int side_number;
        
};

class Triangle : public Figure{

public:
        Triangle(){
        int side_number = 3;
        std::cout << "Треугольник: " << side_number << std::endl;
        };
        

private:
        int side_number;
        
};

class Quadrilateral : public Triangle {

public:
        Quadrilateral(){
        int side_number = 4;
        std::cout << "Четырехугольник: " << side_number << std::endl;
        };
        
private:
        int side_number;
        
};

#endif