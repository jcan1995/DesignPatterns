#ifndef SQUARE_H
#define SQUARE_H

class Square: public Shape{
 private:
  int x,y,width,height;
 public:
 Square(int x, int y,int width, int height, DrawAPI *drawAPI):Shape(drawAPI){
    this -> x = x;
    this -> y = y;
    this -> width = width;
    this -> height = height;

  }
  void draw(){
    drawAPI -> drawSquare(x, y, width, height);
  }


};


#endif
