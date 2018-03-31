#ifndef PAGE_H
#define PAGE_H
#include "PageObject.h"
// #include <iostream>


class Page:public PageObject{

	public:
		void Add(PageObject a){
			std::cout<<"Something is added to the page\n";
		}

		void Remove(){
			std::cout<<"Something is removed from the page\n";
		}
		void Delete(PageObject a){
			std::cout<<"Something is deleted from page\n";
		}
		
	
};

#endif