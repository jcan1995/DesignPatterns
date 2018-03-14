#ifndef FRENCHCOFFEEFACTORY_H
#define FRENCHCOFFEEFACTORY_H

class FrenchCoffeeFactory: public AbstractCoffeeFactory{
 public:
  Coffee* brewCoffee(string type){
    Coffee * coffee;
    if(type == "Dark"){
      coffee = new DarkRoast();
      coffee -> setCoffeeOrigin("France");
    }else if(type == "Light"){
      coffee = new LightRoast();
      coffee -> setCoffeeOrigin("France");
    }
    else
      coffee = NULL;
    return coffee;
  }


};

#endif
