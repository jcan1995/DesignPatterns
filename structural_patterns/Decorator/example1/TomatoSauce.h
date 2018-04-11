#ifndef TOMATOSAUCE_H
#define TOMATOSAUCE_H

#include "ToppingDecorator.h"
#include <iostream>
using namespace std;

class TomatoSauce: public ToppingDecorator{

public:
	TomatoSauce(Pizza *newPizza):ToppingDecorator(newPizza){
		cout<<"Adding sauce"<<endl;
	}

	string getDescription(){return tempPizza -> getDescription()+", Tomato Sauce";}
	double getCost(){return tempPizza -> getCost() + .35;}
};


#endif