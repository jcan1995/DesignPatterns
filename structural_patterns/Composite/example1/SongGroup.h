#ifndef SONGGROUP_H
#define SONGGROUP_H

#include "SongComponent.h"
#include <vector>
// #include <string>

class SongGroup: public SongComponent{

	private:
		std::vector<SongComponent> songComponents;
		std::string groupName;
		std::string groupDescription;

	public:
		
		SongGroup(std::string newGroupName, std::string newGroupDescription);
		~SongGroup();
		std::string getGroupName();
		std::string getGroupDescription();
		SongComponent getComponent(int componentIndex);

		/*Inherited virtual functions*/
		void add(SongComponent newSongComponent);
		void remove(SongComponent newSongComponent);
		void displaySongInfo();	
		/*Inherited virtual functions*/

		
	
};

#endif