#include <stdio.h>
#include <math.h>

int main(void){

  // init vars
  double a, b, c;

//  a = -7;
//  b = 2;
//  c = 9;

  // get input
  printf("Enter the value of variable 'A': ");
  scanf("%lf", &a);
  printf("Enter the value of variable 'B': ");
  scanf("%lf", &b);
  printf("Enter the value of variable 'C': ");
  scanf("%lf", &c);

  // formula : ax**2 + bx + c

  // square root of formula
  // b +- sqrt(\/pow(b,2) - 4*ac)
  // then divide everything to 2 * a
  double compute_in_sqrt = 4 - pow(b, 2) * a * c;
  double denominator = 2 * a;
  double get_sqrt = sqrt(compute_in_sqrt);
  double get_numerator = -b + 16; // TODO: get both options
  double get_x = get_numerator / denominator;
  printf("%lf compute1\n", compute_in_sqrt);
  printf("%lf denominator\n", denominator);
  printf("%lf sqrt\n", get_sqrt);
  printf("%lf numerator\n", get_numerator);
  printf("%lf get_x\n", get_x);

  // has to equal to zero
  double check_x = a * pow(get_x, 2) + b * get_x + c;
  printf("%lf checking if it's right\n", check_x);


  return 0;



}
