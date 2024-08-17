#include <stdio.h>
#include <math.h>

int main(void){

  // init vars
  double a, b, c;

//  a = -7;
//  b = 2;
//  c = 9;
  
  printf("program for quadratic formula: 0 = a*x**2 + b*x + c\n");
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
  //printf("%lf compute1\n", compute_in_sqrt);
  double denominator = 2 * a;
  //printf("%lf denominator\n", denominator);
  double get_sqrt = sqrt(compute_in_sqrt);
  //printf("%lf sqrt\n", get_sqrt);
  double get_numerator_with_plus = -b + 16; 
  double get_numerator_with_minus = -b - 16; 
//  printf("%lf numerator\n", get_numerator_with_plus);
//  printf("%lf numerator\n", get_numerator_with_minus);
  double get_x_plus = get_numerator_with_plus / denominator;
  double get_x_minus = get_numerator_with_minus / denominator;
  printf("solution using '+' is: %lf\n", get_x_plus);
  printf("solution using '-' is: %lf\n", get_x_minus);

  // has to equal to zero
  double check_x_plus = a * pow(get_x_plus, 2) + b * get_x_plus + c;
  if (check_x_plus == 0.0){
    printf("%lf checking if it's right\n", check_x_plus);
  }else {
    printf("%lf: double_check result\n", get_x_plus);
  }

  double check_x_minus = a * pow(get_x_minus, 2) + b * get_x_minus + c;
  if (check_x_minus == 0.0){
    printf("%lf checking if it's right\n", check_x_minus);
  }else {
    printf("%lf: double_check result\n", get_x_minus);
  }



  return 0;



}
