#ifndef MP4PLAYER_H
#define MP4PLAYER_H

#include <iostream>
#include <string>
#include "AdvancedMediaPlayer.h"

using namespace std;

class Mp4Player:public AdvancedMediaPlayer {
 public:
  void playVlc(string fileName){
    cout<<"Mp4 player cannot play vlc"<<endl;
  }

  void playMp4(string fileName){
    cout<<"Playing mp4 file. Name: "<<fileName<<endl;
  }
};

#endif
