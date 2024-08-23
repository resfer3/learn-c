#include <stdio.h>

int main(void){

  // init var
  int variable = 10;
  int *ptr = &variable;

  // other ways
  // second_ptr pointing to the same variable
  int *second_ptr = ptr;
  
  // outputs
  printf("The value of int variable is: %d\n", variable);
  printf("The value of the pointer to the int variable is: %d\n", *second_ptr);
  printf("The memory address of the int variable is %p\n", &variable);
  printf("The value held at the memory location that the pointer is pointing to is %d\n", *ptr);

  int *second_ptr_address = ptr;
  printf("The memory address of the second_ptr is: %p\n", &second_ptr_address);

  return 0;

}
