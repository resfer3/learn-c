#include <stdio.h>

int main(void){

  int array[10] = {10, 30, 1, 100, 30, 40, 50, 10, 60, 50};

  printf("%d\n", *array);

  // if we just print a pointer to the array we will print the 0 index of the array
  // because that's the pointer of the array

  printf("%p\n", &array);
  
  // This is the address of the pointer, the start of the array per se.
  
  return 0;

}
