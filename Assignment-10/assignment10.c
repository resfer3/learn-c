#include <stdio.h>

int main(void){

  //init var
  int numbers[] = {20, 3232, 22, 1, 30, 2};

  // get length
  int length = sizeof(numbers) / sizeof(numbers[0]);

  // output
  printf("The array has %i elements.\n", length);
  return 0;
   
}
