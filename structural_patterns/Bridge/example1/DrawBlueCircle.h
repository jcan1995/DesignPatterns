#ifndef DRAWBLUECIRCLE_H
#define DRAWBLUECIRCLE_H
#include <iostream>
#include "DrawAPI.h"
using namespace std;

class DrawBlueCircle: public DrawAPI{

 public:
  void drawCircle(int radius, int x, int y){
    cout<<"Drawing Circle[color:blue,radius: "<<radius<<" ,x: "<<x<<", y: "<<y<<"]"<<endl;
  }

};


#endif


