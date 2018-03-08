#ifndef ENEMYATTACKER_H
#define ENEMYATTACKER_H

#include <string>
using namespace std;

class EnemyAttacker{

 public:
  virtual void fireWeapon() = 0;
  virtual void driveForward() = 0;
  virtual void assignDriver(string driverName) = 0;


};


#endif
