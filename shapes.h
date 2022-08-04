#pragma once
#include <iostream>

class Rectangle{
private:
    double x;
    double y;
    double w;
    double h;
    public:
    
    Rectangle(double x_, double y_, double w_, double h_):
    x(x_), y(y_), w(w_), h(h_){};
    double calcArea();
};