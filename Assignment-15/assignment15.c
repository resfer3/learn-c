#include <stdio.h>

int main(void){

  // init var
  int variable = 10;
  int *ptr = &variable;

  // other ways
  // second_ptr pointing to the same variable
  int *second_ptr = ptr;
  
  // outputs
  printf("ptr pointing to &variable\n");
  printf("The value of int variable is: %d\n", variable);
  printf("The value of the pointer to the int variable is: %p\n", ptr);
  printf("The memory address of the int variable is %p\n", &variable);
  printf("The value held at the memory location that the pointer is pointing to is %d\n", *ptr);
  // different memory
  printf("second_ptr pointing to ptr\n");
  printf("The value of the pointer to the int variable is: %d\n", *second_ptr);
  printf("The memory address of the pointer second_ptr: %p\n", &second_ptr);

  // second_ptr_address pointing to second_ptr
  int *second_ptr_address = second_ptr;
  printf("second_ptr_address pointing to second_ptr\n");
  printf("The value of second_ptr_address is: %d\n", *second_ptr_address);
  // different memory
  printf("The memory address of the second_ptr_address is: %p\n", &second_ptr_address);

  return 0;

}
