#ifndef AUDIOPLAYER_H
#define AUDIOPLAYER_H

#include <iostream>
#include "MediaPlayer.h"
#include "MediaAdapter.h"
using namespace std;

/*The target class for the client.*/
class AudioPlayer:public MediaPlayer{
 public:
  MediaAdapter *adapter;
  /*Override method from the MediaPlayer class. This class alone can play basic mp3 file types*/
  void play(string audioType, string fileName){
    if(audioType == "mp3"){
      cout<<"Playing mp3 file. Name: "<<fileName<<endl;   
    }else if(audioType == "vlc" || audioType == "mp4"){
      adapter = new MediaAdapter(audioType);
      adapter -> play(audioType,fileName);
    }else
      cout<<"Invalid media. " << audioType<<" format not supported."<<endl;

  }

};



#endif
