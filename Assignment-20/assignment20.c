#include <stdio.h>

struct types{
  int a;
  char b;
  float c;
}types;

int main(void){

  types.a = 3;
  types.b = 'W';
  types.c = 3.14;

  printf("This is the int: %d, this is the char: %c, this is the float: %f\n", types.a, types.b, types.c);

  return 0;

}
