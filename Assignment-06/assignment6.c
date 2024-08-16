#include <stdio.h>

int main(void){

  // init vars
  int numerator, denominator, result;

  // prompt user
  printf("Enter a numerator: ");
  scanf("%i", &numerator);
  printf("Enter a denominator: ");
  scanf("%i", &denominator);

  // error checks
  if (numerator < denominator){
    printf("Wrong order\n");
    return 1;
  }

  // compute
  result = numerator % denominator;

  // output
  if (result > 0){
    printf("There is a remainder! %i\n", result);
  }
  else {
    printf("There is NOT a remainder! %i\n", result);
  }




}
