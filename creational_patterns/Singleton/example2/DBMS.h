#ifndef DBMS_H
#define DBMS_H


#include <iostream>
using namespace std;

class DBMS{

 private:
  static DBMS *instance;
  DBMS(){}
 public:
  static DBMS* getInstance(){
    if(!instance)
      instance = new DBMS;
    return instance;
  }
  void connect(){
    cout<<"Connecting to DBMS"<<endl;
  }


};


#endif
