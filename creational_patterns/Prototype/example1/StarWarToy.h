#ifndef STARWARTOY_H
#define STARWARTOY_H

#include <iostream>
#include "Toy.h"
using namespace std;

class StarWarToy: public Toy{

 public:
  Toy* clone(){
    return new StarWarToy;
  }
  void play(){
    cout<<"Playing with lightsaber"<<endl;
  }
};

#endif
