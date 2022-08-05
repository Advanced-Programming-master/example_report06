#pragma once
#include <iostream>
using namespace std;

class Rectangle {
 private:
  double x;
  double y;
  double w;
  double h;

 public:
  Rectangle(double x_, double y_, double w_, double h_)
      : x(x_), y(y_), w(w_), h(h_){};

 public:
  double calcArea();
  void disp_param() {
    cout << x << ", " << y << ", " << w << ", " << h << ", " << calcArea()
         << endl;
  }
};