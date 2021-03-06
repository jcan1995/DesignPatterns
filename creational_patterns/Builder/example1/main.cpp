#include "Director.h"

int main(){

  MiniVanBuilder builder1;
  TeslaBuilder builder2;

  Director director; 
  Car *car1 = builder1.buildCar();
  Car *car2 = builder2.buildCar();


  director.setBuilder(&builder1);
  director.construct();

  director.setBuilder(&builder2);
  director.construct();


  car1 -> drive();
  car2 -> drive();


}
