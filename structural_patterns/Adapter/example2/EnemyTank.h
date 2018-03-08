#ifndef ENEMYTANK_H
#define ENEMYTANK_H

#include "EnemyAttacker.h"
using namespace std;
/*Class that inherits and implements functions from EnemyAttacker interface.*/
class EnemyTank:public EnemyAttacker {

 public:
  void fireWeapon(){
    cout<<"Weapon fired by enemy tank!"<<endl;
  }

  void driveForward(){
    cout<<"Tank driving forward!"<<endl;
  }

  void assignDriver(string driverName){
    cout<<"Driver " <<driverName<<" is driving the tank!"<<endl;

  }

  

};

#endif
