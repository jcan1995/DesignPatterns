#include "DBMS.h"

DBMS *DBMS:: instance = 0;

int main(){

  DBMS *ptr = DBMS::getInstance();
  ptr -> connect();

}
