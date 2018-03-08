#ifndef ENEMYROBOTADAPTER_H
#define ENEMYROBOTADAPTER_H

#include "EnemyAttacker.h"
#include "EnemyRobot.h"
/*Adapter class that adapts an EnemyRobot to EnemyAttacker.*/
class EnemyRobotAdapter: public EnemyAttacker{

  EnemyRobot *robot;

 public:
  EnemyRobotAdapter(EnemyRobot *r){robot = r;}//Specific to only EnemyRobot

  /*Point inherited functions to their respective functions in EnemyRobot*/
  void fireWeapon(){
    robot -> smashWithHands();
  }
  void driveForward(){
    robot -> walkForward();
  }
  void assignDriver(string driverName){
    robot -> reactToHuman(driverName);

  }

};

#endif
