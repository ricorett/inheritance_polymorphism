#pragma once
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

class Figure{

public:
      
      Figure() : name("Фигура"){}
      std::string get_figure_name(){return name;}
      int get_size_count(){return sides.size();}
      int get_angle_coun(){ return angles.size();};
      
      double get_side(int n){return sides[n];}
      double get_angle(int n){return angles[n];}
protected:  
        std::string name;
        std::vector<double> sides;
        std::vector<double> angles;
};


void print_info();

