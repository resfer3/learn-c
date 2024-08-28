#include <stdio.h>

struct thing{
  int number;
};

struct thing *ptr;

struct thing init;

int main(void){
  
  // point to struct init
  ptr = &init;
  printf("ptr = &init\n");
  printf("struct *ptr is a pointer to struct init\n");
  
  // fundamentally struct ptr becomes init

  // all of these operation do the same thing
  // assign values and print
  init.number = 5;
  printf("init.number = %d\n", init.number);

  (*ptr).number = 1;
  printf("above: (*ptr).number = %d\n", (*ptr).number);
  printf("above: ptr->number = %d\n", ptr->number);
  // the above and below operations do the same
  // only difference is the syntax
  // if you attempt to print the above operation with the arrow notation, it's the same value as it should
  ptr->number = 10;
  printf("below: (*ptr).number = %d\n", (*ptr).number);
  printf("below: ptr->number = %d\n", ptr->number);

  // first print but printing after latest change of value
  printf("first print but at the end: init.number = %d\n", init.number);


  return 0;
}
