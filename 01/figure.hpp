#ifndef FIGURE_HPP
#define FIGURE_HPP

#include <iostream>

class Figure {

public:
  int side_number;
  std::string name = "Фигура";

  Figure() { side_number = 0; };
  void print_number() { std::cout << side_number << std::endl; };
  void print_name() { std::cout << name << ":" << std::endl; }
};

class Triangle : public Figure {

public:
  Triangle() {
    side_number = 3;
    name = "Треугольник";
  };
};

class Quadrilateral : public Figure {

public:
  Quadrilateral() {
    side_number = 4;
    name = "Четырехугольники";
  };
};

#endif // FIGURE_HPP