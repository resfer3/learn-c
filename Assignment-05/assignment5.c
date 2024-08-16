#include <stdio.h>
#include <math.h>

int main(){

  // init var
  float compute, minutes, hours, first_seconds;
  int seconds;
  
  // get input
  printf("Enter the amount of seconds: ");
  scanf("%f", &first_seconds);

  // compute
  hours = first_seconds / 3600;
  //printf("%f\n hours", hours);
  compute = hours * 60.00;
 // printf("%f\n compute", compute);
  minutes = round(compute);
  minutes = (int) compute  % 60;
//  printf("%f\n minutes", minutes);
  seconds = (int) first_seconds % 60;

  // print
  printf("%d seconds is equal to %d hours, %d minutes, and %d seconds\n",(int) first_seconds, (int) round(hours), (int) round(minutes), seconds);

  return 0;
  
  


}
