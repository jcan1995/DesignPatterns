#ifndef TOPPINGDECORATOR_H
#define TOPPINGDECORATOR_H

#include "Pizza.h"

class ToppingDecorator: public Pizza{
	
	protected:
		Pizza *tempPizza;
	public:
		ToppingDecorator(Pizza *newPizza){tempPizza = newPizza;}
		string getDescription(){return tempPizza -> getDescription();}
		double getCost(){return tempPizza -> getCost();}
};

#endif