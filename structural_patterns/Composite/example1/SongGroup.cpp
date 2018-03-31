#include "SongGroup.h"
#include <iostream>

SongGroup::SongGroup(std::string newGroupName, std::string newGroupDescription){
	this -> groupName = newGroupName;
	this -> groupDescription = newGroupDescription;
}

SongGroup::~SongGroup(){

}

std::string SongGroup::getGroupName(){
	return this -> groupName;
}

std::string SongGroup::getGroupDescription(){
	return this -> groupDescription;
}

void SongGroup::add(SongComponent newSongComponent){
	this -> songComponents.push_back(newSongComponent);
}

void SongGroup::remove(SongComponent newSongComponent){


	// for(int i = 0; i < this -> songComponents.size();i++){
	// 	if(this -> songComponents[i] == newSongComponent){
	// 		this -> songComponents.erase(i);
	// 		break;
	// 	}
	// }

}

SongComponent SongGroup::getComponent(int componentIndex){

	return this -> songComponents[componentIndex];
}

void SongGroup::displaySongInfo(){
	std::cout<<getGroupName()<<" "<<getGroupDescription()<<"\n";
	for(int i = 0; i < this -> songComponents.size();i++){
		SongComponent songInfo = (SongComponent) songComponents[i];
		songInfo.displaySongInfo();
	}
}	