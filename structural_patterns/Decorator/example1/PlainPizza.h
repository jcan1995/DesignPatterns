#ifndef PLAINPIZZA_H
#define PLAINPIZZA_H

#include "Pizza.h"

class PlainPizza: public Pizza{
	public:
		string getDescription(){return "Thin dough ";}
		double getCost(){return 4.00;}
	
};

#endif