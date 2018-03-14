#ifndef ABSTRACTCOFFEEFACTORY_H
#define ABSTRACTCOFFEEFACTORY_H

class AbstractCoffeeFactory{

 public:
  AbstractCoffeeFactory(){}
  virtual Coffee* brewCoffee(string type) = 0;



};

#endif
