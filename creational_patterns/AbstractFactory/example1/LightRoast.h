#ifndef LIGHTROAST_H
#define LIGHTROAST_H

#include "Coffee.h"
#include <iostream>
using namespace std;

class LightRoast:public Coffee{

 public:
  LightRoast(){cout<<"Creating Light Roast"<<endl;}
  void drink(){
    cout<<"Drinking LightRoast coffee from "<<origin<<endl;
  }




};

#endif
