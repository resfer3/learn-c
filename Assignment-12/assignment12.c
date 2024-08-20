#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

  // init vars
  int heads = 0;
  int tails = 0;
  int flips;

  // get input
  printf("How many times would you like to flip the coin? ");
  scanf("%i", &flips);

  // get random output
  srand(time(NULL));
  int N = 1;

  for (int i = 0; i < flips; i++){

    // Generate a random outcome between 0 and 1
    int value = rand() % (N + 1);
    if (value == 1){
      heads++;
    }
    else if (value == 0){
      tails++; 
    }
//    printf("%d ", value);
  }

  printf("%i heads\n", heads);
  printf("%i tails\n", tails);


  return 0;
}
