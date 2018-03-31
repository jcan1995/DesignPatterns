#include "Page.h"
#include "Copy.h"

int main(){

	Page a;
	Page b;
	Copy allcopy;
	allcopy.AddElement(a);
	
	allcopy.Add(a);
	a.Add(b);
	allcopy.Remove();
	b.Remove();
}