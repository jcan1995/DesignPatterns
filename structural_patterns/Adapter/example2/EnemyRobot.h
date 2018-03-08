#ifndef ENEMYROBOT_H
#define ENEMYROBOT_H

#include <iostream>
using namespace std;

/*Independent class that does not inherit from EnemyAttacker interface.
This class is our Adaptee.
*/
class EnemyRobot{

 public:

  void smashWithHands(){
    cout<<"Robot attacking with hands!"<<endl;
  }

  void walkForward(){
    cout<<"Robot walking forward!"<<endl;
  }
  void reactToHuman(string driverName){
    cout<<"Robot tramps on "<<driverName<<endl;
  }

};

#endif
