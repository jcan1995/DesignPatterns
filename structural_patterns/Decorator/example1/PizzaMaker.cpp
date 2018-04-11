#include "TomatoSauce.h"
#include "Mozzarella.h"
#include "PlainPizza.h"


int main(){
	Pizza *basicPizza = new TomatoSauce(new Mozzarella(new PlainPizza()));
	cout<<"Ingredients: "+ basicPizza -> getDescription()<<endl;
	cout<<"Cost: "<< basicPizza -> getCost()<<endl;


}