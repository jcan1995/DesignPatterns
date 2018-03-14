#ifndef COLUMBIANCOFFEEFACTORY_H
#define COLUMBIANCOFFEEFACTORY_H
#include "DarkRoast.h"
#include "LightRoast.h"
#include "AbstractCoffeeFactory.h"
#include <string>
using namespace std;

class ColumbianCoffeeFactory: public AbstractCoffeeFactory{
 public:
  Coffee* brewCoffee(string type){
    Coffee* coffee;
    if(type =="Dark"){
      coffee = new DarkRoast();
      coffee -> setCoffeeOrigin("Columbia");
    }else if(type == "Light"){
      coffee = new LightRoast();
      coffee -> setCoffeeOrigin("Columbia");
    }
    else
      coffee = NULL;
    return coffee;

  }

};


#endif
