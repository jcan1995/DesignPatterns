#ifndef SINGLETON2_H
#define SINGLETON2_H
#include <iostream>
using namespace std;

/*static function is created to further restrict users from creating objects. instance is also made static because static functions can only work with static data members.*/

class Singleton2{

 private:
  int data;
  static Singleton2 *instance2;
  Singleton2(int data){
    this -> data = data;
  }/*Contructor private to restrict object creation from clients*/
 public:
  static Singleton2 *getInstance2(){
    if(!instance2)
      instance2 = new Singleton2(5);//

    return instance2;
  }
  void printData(){
    cout<<"Hello, I am storing: "<<data<<endl;
  }

};

#endif
