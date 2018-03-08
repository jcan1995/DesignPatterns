#ifndef BUILDER_H
#define BUILDER_H

#include "Car.h"
class Builder{

 protected:
  Car *_product;

 public:
  Builder(){
    _product = new Car;
  }
  virtual void buildType() = 0;
  virtual void buildName() = 0;
  virtual void buildBody() = 0;
  virtual void buildWheel() = 0;
  virtual void buildDriverSystem() = 0;
  Car*  buildCar(){
    return _product;

  }

};

#endif
