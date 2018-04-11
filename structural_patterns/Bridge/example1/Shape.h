#ifndef SHAPE_H
#define SHAPE_H

#include "DrawRedCircle.h" 

class Shape{
 protected:  
  DrawAPI *drawAPI;
 public:
  Shape(DrawAPI *drawAPI){
    this -> drawAPI = drawAPI;
  }
  virtual void draw() = 0;



};


#endif
