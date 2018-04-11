#ifndef DRAWAPI_H
#define DRAWAPI_H

class DrawAPI{
 public:
  virtual void drawCircle(int radius, int x, int y) = 0;
  virtual void drawSquare(int x, int y, int width, int height) = 0;

};


#endif
