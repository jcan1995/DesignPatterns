#ifndef FACTORY_H
#define FACTORY_H

#include "TransformerToy.h"
#include "StarWarToy.h"
#include "DragonBallToy.h"

class Factory{

 public:
  static Toy* makeToy(int type){
    return _prototypes[type] -> clone();

  }
 private:
  static Toy *_prototypes[];


};

Toy* Factory::_prototypes[] = {
  new TransformerToy, new StarWarToy, new DragonBallToy  
};

#endif 
