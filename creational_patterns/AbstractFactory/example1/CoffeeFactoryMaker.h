#ifndef COFFEEFACTORYMAKER_H
#define COFFEEFACTORYMAKER_H

#include "ColumbianCoffeeFactory.h"
#include "FrenchCoffeeFactory.h"
class CoffeeFactoryMaker{

 public:
  static AbstractCoffeeFactory *getCoffeeFactory(string name){
    if(name == "Columbian")
      return new ColumbianCoffeeFactory();
    else if(name =="French")
      return new FrenchCoffeeFactory();
    else
      return NULL;
  } 
};

#endif
