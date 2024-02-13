#pragma once
#include "parallelogramm.h"


class Square : public Parallelogramm
{
public:
    Square(double a);
    
    bool check_state() override;
};