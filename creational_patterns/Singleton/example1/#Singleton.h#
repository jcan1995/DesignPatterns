#ifndef SINGLETON_H
#define SINGLETON_H


#include <iostream>
using namespace std;

class Singleton{

 private:
  static Singleton *instance;
  Singleton(){
    cout<<"Created Singleton instance"<<endl;
  }
 public:
  static Singleton* getInstance(){
    return instance;
  }
  void print(){
    cout<<"Hello, from singleton!"<<endl;
  }

};




#endif
