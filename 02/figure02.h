#pragma once
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <memory>
#include <cmath>


#define EPSILON 0.0000001
#define FLOAT_EQUALS(x,y) (fabs(x-y) < EPSILON)

class Figure{

public:
      
      Figure() : name("Фигура"){}
      std::string get_figure_name(){return name;}
      
      int get_side_count(){return sides.size();}
      int get_angle_count(){ return angles.size();};
      
      
      double get_side(int n){return sides[n];}
      double get_angle(int n){return angles[n];}
      virtual void print_info() { std::cout << "Неопределенная фигура" << std::endl; }
      

protected:  
      
        std::string name;
        std::vector<double> sides;
        std::vector<double> angles;
};

class FigureError : public std::exception {
public:

    FigureError(const std::string& message): message{message} {}
    const char* what() const noexcept override
    {
        return message.c_str();
    }
private:
    std::string message;

};
