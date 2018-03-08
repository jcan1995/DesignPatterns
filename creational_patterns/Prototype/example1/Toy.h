#ifndef TOY_H
#define TOY_H

class Toy{

 public: 
  virtual Toy* clone() = 0;
  virtual void play() = 0;

};



#endif
