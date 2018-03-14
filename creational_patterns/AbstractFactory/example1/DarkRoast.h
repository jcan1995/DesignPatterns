#ifndef DARKROAST_H
#define DARKROAST_H

#include "Coffee.h"
#include <iostream>
using namespace std;
class DarkRoast:public Coffee{

 public:
  DarkRoast(){cout<<"Create Dark Roast"<<endl;}
  void drink(){
    cout<<"Drinking DarkRoast coffee from "<<origin<<endl;
  }

};


#endif
