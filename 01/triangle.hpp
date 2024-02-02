#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP
#include "figure.hpp"


class Triangle : public Figure
{

public:
        Triangle(){};
        void number_of_side_output();

private:
        int side_number;
};

#endif