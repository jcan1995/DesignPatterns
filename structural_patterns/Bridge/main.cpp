#include "Circle.h"
#include <iostream>
#include "DrawRedCircle.h"
#include "DrawBlueCircle.h"

using namespace std;


int main(){

  Shape *circle = new Circle(100,100,10, new DrawRedCircle());
  circle -> draw();

  Shape *circle2 = new Circle(100,100,10, new DrawBlueCircle());
  circle2 -> draw();



}
