#include "CoffeeFactoryMaker.h"

int main(){

  AbstractCoffeeFactory* obj[2];
  
  obj[0] = CoffeeFactoryMaker::getCoffeeFactory("Columbian");
  obj[1] = CoffeeFactoryMaker::getCoffeeFactory("French");
  
  Coffee *coffees[4];
  coffees[0] = obj[0] -> brewCoffee("Dark");
  coffees[0] -> drink();

  coffees[1] = obj[0] -> brewCoffee("Light");
  coffees[1] -> drink();

  coffees[2] = obj[1] -> brewCoffee("Dark");
  coffees[2] -> drink();

  coffees[3] = obj[1] -> brewCoffee("Light");
  coffees[3] -> drink();


}
