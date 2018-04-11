#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle: public Shape{
 private:
  int x,y, radius;
 public: 
 Circle(int x, int y, int radius, DrawAPI *drawAPI):Shape(drawAPI){
    this -> x = x;
    this -> y = y;
    this -> radius = radius;
  }
  void draw(){
    drawAPI -> drawCircle(radius,x,y);

  }



};


#endif
