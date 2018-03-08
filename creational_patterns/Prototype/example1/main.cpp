#include <iostream>
#include "Factory.h"
#include "Toy.h"
#include <vector>

using namespace std;

int main(){

  vector<Toy*> toys;
  int choice;

  while(true){
    cout<<"Choose a toy:\n0. Transformer\n1. StarWars\n2. DragonBallZ\n3. Play\n"<<endl;
    cin>>choice;
    if(choice == 3)
      break;
    toys.push_back(Factory::makeToy(choice));
 
  }
  for(int i = 0; i < toys.size();i++){
    toys[i] -> play();
  }

}
