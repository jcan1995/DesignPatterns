#ifndef MEDIAADAPTER_H
#define MEDIAADAPTER_H

#include "MediaPlayer.h"
#include "VlcPlayer.h"
#include "Mp4Player.h"
/*Adapter class */
class MediaAdapter:public MediaPlayer{
 public:
  /*Object contains the ability to play both mp4 and vlc file types.*/
  AdvancedMediaPlayer *advancedMusicPlayer;

  MediaAdapter(string audioType){
    if(audioType == "vlc")
      advancedMusicPlayer = new VlcPlayer();
    else if(audioType == "mp4")
      advancedMusicPlayer = new Mp4Player();

  }
  void play(string audioType, string fileName){
    if(audioType == "vlc")
      advancedMusicPlayer -> playVlc(fileName);
    else if(audioType == "mp4")
      advancedMusicPlayer -> playMp4(fileName);

  }
};

#endif
