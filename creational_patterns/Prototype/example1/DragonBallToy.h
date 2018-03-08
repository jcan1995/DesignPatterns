#ifndef DRAGONBALLTOY_H
#define DRAGONBALLTOY_H

#include "Toy.h"
#include <iostream>
using namespace std;

class DragonBallToy: public Toy{

 public:
  Toy* clone(){
    return new DragonBallToy;
  }
  void play(){
    cout<<"Playing with dragon ball toy!"<<endl;
  }

};

#endif
