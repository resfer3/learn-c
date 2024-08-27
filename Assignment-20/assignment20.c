#include <stdio.h>

// One Way
struct types{
  int a;
  char b;
  float c;
};

// Second Way (typedef)
typedef struct {
  int x;
  int y;
  float ap;
} types2;

int main(void){

  // One way
  // assign values to struct types
  struct types var = { 3, 'Q' , 3.15 }; 

  // Second Way (typedef)
  types2 var2 = { 3, 1, 10.10 };

  printf("This is the int: %d, this is the char: %c, this is the float: %f\n", var.a, var.b, var.c);
  printf("This is the typedef way\n");
  printf("This is the int: %d, this is the int: %d, this is the float: %f\n", var2.x, var2.y, var2.ap);

  return 0;

}
