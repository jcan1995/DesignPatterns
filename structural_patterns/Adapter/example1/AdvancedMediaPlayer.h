#ifndef ADVANCEDMEDIAPLAYER_H
#define ADVANCEDMEDIAPLAYER_H

/*Interface class implemented by Mp4Player and VlcPlayer*/
class AdvancedMediaPlayer{

 public:
  //Pure virtual functions.
  virtual void playVlc(string fileName) = 0;
  virtual void playMp4(string fileName) = 0;

};



#endif

