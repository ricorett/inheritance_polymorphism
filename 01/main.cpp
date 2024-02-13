#include "figure.hpp"

int main() {
  Triangle t;
  Figure f;
  Quadrilateral q;
  std::cout << "Количество сторон фигуры: \n";
  f.print_name();
  f.print_number();
  t.print_name();
  t.print_number();
  q.print_name();
  q.print_number();
  return 0;
}