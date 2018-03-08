#ifndef CAR_H
#define CAR_H

#include <iostream>
using namespace std;

class Car{

 public:
  string type;
  string name;
  string body;
  string wheel;
  string driver_system;
  void drive() {
    cout << type << " " << name << " " << body << " " << wheel << " " << driver_system << endl;
  }
};



#endif
