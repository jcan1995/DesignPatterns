#ifndef MOZZARELLA_H
#define MOZZARELLA_H

#include "ToppingDecorator.h"
#include <iostream>
using namespace std;

class Mozzarella: public ToppingDecorator{

public:
	Mozzarella(Pizza *newPizza):ToppingDecorator(newPizza){
		cout<<"Adding dough"<<endl;
		cout<<"Adding Moz"<<endl;
	}

	string getDescription(){return tempPizza -> getDescription()+", Mozzarella";}
	double getCost(){return tempPizza -> getCost() + .50;}
};


#endif