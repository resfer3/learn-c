#include <stdio.h>

int main(void){

  // declare var
  int x = 10;
  // declare ptr to var
  int* ptr = &x;

  //print the value pointed by ptr
  printf("%d\n", *ptr);
  //print the address pointed by ptr
  printf("%p\n", ptr);
  //print the address of ptr itself
  printf("%p\n", &ptr);

  return 0;

}
