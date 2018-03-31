#ifndef COPY_H
#define COPY_H

#include "PageObject.h"
#include <vector>
// #include <iostream>

class Copy:public PageObject {
	private:
		std::vector<PageObject> copyPages;
		
	public:
		void AddElement(PageObject a){
			this -> copyPages.push_back(a);

		}
		void Add(PageObject a){
			std::cout<<"Something is added to the copy\n";
		}

		void Remove(){
			std::cout<<"Something is removed from the copy\n";
		}

		void Delete(PageObject a){
			std::cout<<"Something is deleted rom the copy\n";
		}

};

#endif