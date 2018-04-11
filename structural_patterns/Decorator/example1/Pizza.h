#ifndef PIZZA_H
#define PIZZA_H
#include <string>
using namespace std;

class Pizza{

	public:
		Pizza(){}
		virtual string getDescription() = 0;
		virtual double getCost() = 0;
	
};


#endif