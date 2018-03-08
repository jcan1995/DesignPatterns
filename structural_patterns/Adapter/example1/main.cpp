#include <iostream>
#include "AudioPlayer.h"
using namespace std;

int main(){

  AudioPlayer *player = new AudioPlayer();
  player -> play("mp3","beyond_the_horizon.mp3");
  player -> play("vlc","alone.vlc");
  player -> play("mp4","far_far_away.mp4");
  return 0;
}
