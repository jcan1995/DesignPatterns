#ifndef COFFEE_H
#define COFFEE_H
#include <string>
using namespace std;

class Coffee{
 public:
  string origin;

  Coffee(){}
  void setCoffeeOrigin(string origin){this -> origin = origin;}
  virtual void drink() = 0;

};

#endif
