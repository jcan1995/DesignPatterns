#ifndef MINIVANBUILDER_H
#define MINIVANBUILDER_H

#include "Builder.h"

class MiniVanBuilder: public Builder{

 public:
  void buildType() { _product->type = "mini van"; }
  void buildName() { _product->name = "town & country"; }
  void buildBody() { _product->body = "7-seats body"; }
  void buildWheel() { _product->wheel = "big wheels"; }
  void buildDriverSystem() { _product->driver_system = "automatic system"; }


};



#endif
