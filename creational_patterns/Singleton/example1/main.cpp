#include "Singleton.h"
#include "Singleton2.h"
#include <iostream>
using namespace std;

/*Allocating the pointers, not objects.*/
Singleton *Singleton::instance = 0;
Singleton2 *Singleton2::instance2 = 0;


int main(){

  Singleton *ptr = Singleton::getInstance();
  ptr -> print();
  
  Singleton2 *ptr2 = Singleton2::getInstance2();
  ptr2 -> printData();




  return 0;

}
