#ifndef VLCPLAYER_H
#define VLCPLAYER_H

#include <iostream>
#include <string>
#include "AdvancedMediaPlayer.h"

using namespace std;

class VlcPlayer:public AdvancedMediaPlayer {
 public:
  void playVlc(string fileName){
    cout<<"Playing vlc file. Name: "<<fileName<<endl;
  }
  void playMp4(string fileName){
    cout<<"Vlc player cannot play mp4."<<endl;

  }
};

#endif
