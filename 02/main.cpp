#include "eq_triangle.h"
#include "figure02.h"
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
    print_info(&f);
    std::cout << std::endl;

    try {
        Triangle t(10, 20, 30, 60, 60, 60);
        print_info(&t);
        std::cout << std::endl;
    } catch (const char* err) {
        std::cout << "Ошибка создания треугольника. " << err << std::endl;
    }

    try {
        Isosceles_triangle rb(10, 20, 45, 90);
        print_info(&rb);
        std::cout << std::endl;
    } catch (const char* err) {
        std::cout << "Ошибка создания равнобедренного треугольника. " << err << std::endl;
    }


    try {
        Equilateral_triangle r(10, 20);
        print_info(&r);
        std::cout << std::endl;
    } catch (const char* err) {
        std::cout << "Ошибка создания равностороннего треугольника. " << err << std::endl;
    }

    try {
        Right_Triangle prt(10, 20, 30, 40, 50);
        print_info(&prt);
        std::cout << std::endl;
    } catch (const char* err) {
        std::cout << "Ошибка создания прямоугольного треугольника. " << err << std::endl;
    }   

    try {
        Parallelogramm par(10, 20, 30, 40, 50, 60, 70, 80);
        print_info(&par);
        std::cout << std::endl;
    } catch (const char* err){
        std::cout << "Ошибка создания параллелограмма. " << err << std::endl;
    }

    try {
        Rectangle pry(10, 20);
        print_info(&pry);
        std::cout << std::endl;
    } catch (const char* err){
        std::cout << "Ошибка создания прямоугольника. " << err << std::endl;
    }

    try {
        Square kva(10);
        print_info(&kva);
        std::cout << std::endl;
    } catch (const char* err){
        std::cout << "Ошибка создания квадрата. " << err << std::endl;
    }

    try {
        Rhombus rom(10, 20, 30);
        print_info(&rom);
        std::cout << std::endl;
    } catch (const char* err){
        std::cout << "Ошибка создания ромба. " << err << std::endl;
    }   
    
    return 0;
}



void print_info(Figure* f){
    f->print_info();
}