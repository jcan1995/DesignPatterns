#ifndef DRAWREDCIRCLE_H
#define DRAWREDCIRCLE_H
#include <iostream>
#include "DrawAPI.h"
using namespace std;

class DrawRedCircle: public DrawAPI{

 public:
  void drawCircle(int radius, int x, int y){
    cout<<"Drawing Circle[color:red,radius: "<<radius<<" ,x: "<<x<<", y: "<<y<<"]"<<endl;
  }

  void drawSquare(int x, int y, int width, int height){
    cout<<"Drawing Square[color:red, "<<"x: "<<x<<", y: "<<y<<"width: "<<width<<"height: "<<height<<"]"<<endl;
  }


};


#endif
