#ifndef SONGCOMPONENT_H
#define SONGCOMPONENT_H
#include <string>

class SongComponent{

	public:
		virtual void add(SongComponent newSongComponent){
			// throw something...

		}
		virtual void remove(SongComponent newSongComponent){ 
			// throw something...
		}

		virtual SongComponent getComponent(int componentIndex){
			// throw something...

		}

		virtual std::string getSongName(){
			// throw something...

		}

		virtual std::string getBandName(){
			// throw something...

		}

		virtual std::string getReleaseYear(){
			// throw something...

		}

		virtual void displaySongInfo(){
			// throw something...

		}
};

#endif