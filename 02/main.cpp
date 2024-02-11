#include "eq_triangle.h"
#include "figure02.h"
#include "isos_triangle.h"
#include "parallelogram.h"
#include "rectangle.h"
#include "rhombus.h"
#include "right_triangle.h"
#include "square.h"
#include "triangle.h"

void print_info(Figure *f);

int main()

{
   // setlocale(LC_ALL, "Russian"); // Я запускаю MS VC++ под винду. мне это надо. тебе это не надо.
    // Поехали, создаем фигуры
    Figure f;
    Triangle t(10, 20, 30, 30, 40, 110);
    // Кстати, угол 110 градусов - тупой. Такой же тупой как тот, кто писал условия задачи.
    Equilateral_triangle rb(10, 20, 45, 90);
    Right_Triangle r(10, 20);
    Isosceles_triangle prt(10, 20, 30, 40, 50);
    Parallelogramm par(10, 20, 30, 40, 50, 60, 70, 80);
    Rectangle pry(10, 20);
    Square kva(10);
    Rhombus rom(10, 20, 30);
    // Вызываем для каждой фигуры print_info
    print_info(&f);
    print_info(&t);
    print_info(&rb);
    print_info(&r);
    print_info(&prt);
    print_info(&par);
    print_info(&pry);
    print_info(&kva);
    print_info(&rom);
    return 0;
}


void print_info(Figure* f)
{
    std::cout << f->get_figure_name() << ":" << std::endl;
   std::cout << "Стороны: ";
    for (int i = 0; i < f->get_side_count(); i++) std::cout << (char)('a' + i) << "=" << f->get_side(i) << " ";     // Если к char прибавить число, то будет следующий char. 'a' + 1 = 'b'. Такие дела.
    std::cout <<std::endl << "Углы: ";                                                                                   
    for (int i = 0; i < f->get_side_count(); i++) std::cout << (char)('A' + i) << "=" << f->get_angle(i) << " ";
   std::cout << std::endl << std::endl;
}
