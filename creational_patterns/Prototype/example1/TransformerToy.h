#ifndef TRANSFORMERTOY_H
#define TRANSFORMERTOY_H

#include "Toy.h"
#include <iostream>
using namespace std;


class TransformerToy: public Toy{

 public:
  Toy* clone(){
    return new TransformerToy;
  }
  void play(){
    cout<<"Playing with transformer toy!"<<endl;
  }


};



#endif
