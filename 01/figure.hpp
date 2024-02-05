#ifndef FIGURE_HPP
#define FIGURE_HPP


#include <iostream>

class Figure{

public:
        int side_number;

        Figure(){
        side_number = 0;
        };
        void print_number(){
                std::cout << side_number << std::endl;
        };
        
};

class Triangle : public Figure{

public:
        Triangle(){
        side_number = 3;
        };
        
};

class Quadrilateral : public Figure {

public:
        Quadrilateral(){
        side_number = 4;
        };
        
};

#endif //FIGURE_HPP