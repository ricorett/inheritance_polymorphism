#pragma once
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <memory>

class Figure{

public:
      
      Figure() : name("Фигура"){}
      std::string get_figure_name(){return name;}
      
      int get_side_count(){return sides.size();}
      int get_angle_count(){ return angles.size();};
      
      
      double get_side(int n){return sides[n];}
      double get_angle(int n){return angles[n];}
      
      bool check_state();     
protected:  
      
        std::string name;
        std::vector<double> sides;
        std::vector<double> angles;
};


