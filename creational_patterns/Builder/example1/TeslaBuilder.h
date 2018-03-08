#ifndef TESLABUILDER_H
#define TESLABUILDER_H

#include <iostream>
#include "Builder.h"

using namespace std;

class TeslaBuilder: public Builder {
 public:
  void buildType() { _product->type = "sedan"; }
  void buildName() { _product->name = "model 3"; }
  void buildBody() { _product->body = "4-seats body"; }
  void buildWheel() { _product->wheel = "small wheels"; }
  void buildDriverSystem() { _product->driver_system = "autonomous system"; }
};

#endif
