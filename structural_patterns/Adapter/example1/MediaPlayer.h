#ifndef MEDIAPLAYER_H
#define MEDIAPLAYER_H

#include <string>
using namespace std;
/*Interface class*/

class MediaPlayer{

 public:
  virtual void play(string audioType, string fileName) = 0;

};

#endif
