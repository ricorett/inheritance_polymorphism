#include "eq_triangle.h"
#include "figure03.h"
#include "isos_triangle.h"
#include "parallelogramm.h"
#include "rectangle.h"
#include "rhombus.h"
#include "right_triangle.h"
#include "square.h"
#include "triangle.h"

void print_info(Figure *f);

int main()
{
    Figure f;
    Triangle t(10, 20, 30, 30, 40, 110);
    Isosceles_triangle rb(10, 20, 45, 90);
    Equilateral_triangle r(10, 20);
    Right_Triangle prt(10, 20, 30, 40, 50);
    Parallelogramm par(10, 20, 30, 40, 50, 60, 70, 80);
    Rectangle pry(10, 20);
    Square kva(10);
    Rhombus rom(10, 20, 30);


    print_info(&f);
    std::cout << std::endl;
    print_info(&t);
    std::cout << std::endl;
    print_info(&rb);
    std::cout << std::endl;
    print_info(&r);
    std::cout << std::endl;
    print_info(&prt);
    std::cout << std::endl;
    print_info(&par);
    std::cout << std::endl;
    print_info(&pry);
    std::cout << std::endl;
    print_info(&kva);
    std::cout << std::endl;
    print_info(&rom);

    return 0;
}


void print_info(Figure* f){ f->print_info();}
