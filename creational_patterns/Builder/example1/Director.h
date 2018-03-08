#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "MiniVanBuilder.h"
#include "TeslaBuilder.h"

class Director{
  
 private:
  Builder *_builder;
  
 public:
  void setBuilder(Builder *b){_builder = b;}
  
  void construct(){
    _builder -> buildType();
    _builder->buildName();
    _builder->buildBody();
    _builder->buildWheel();
    _builder->buildDriverSystem();
  }

};


#endif
