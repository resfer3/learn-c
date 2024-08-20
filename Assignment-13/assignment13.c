#include <stdio.h>

int main(void){

  // init var
  int basketball[4][5];

  // loop through each game, get players points
  for (int game = 0; game < 4; game++){
    
    printf("Game #%i\n", game + 1);

    for (int x = 0; x < 5; x++){
      
      printf("Enter scoring total for Player #%d: ", x+1);
      scanf("%d", &basketball[game][x]);

    }

  }

  // loop to get total scores
  int players_total[5] = {0, 0, 0, 0, 0};

  for (int i = 0; i < 4; i++){
    //printf("game #%d\n", i);
    for (int j = 0; j < 5; j++){
      players_total[j] += basketball[i][j];
    //  printf("player points #%d\n", basketball[i][j]);

    }
  }
  
  for (int s = 0; s < 5; s++){
    printf("%d ", players_total[s]);
  }
  printf("\n");

  // loop to get average
  double players_best_avg[5] = {0, 0, 0, 0, 0};
  for (int b = 0; b < 5; b++){
    players_best_avg[b] = (float) players_total[b] / 4;  
   // printf("%f \n", players_best_avg[b]);
  }

  // get highest 
  float highest = players_best_avg[0];
  int index = 1;
  for (int h = 0; h < 5; h++){
    printf("%f\n", players_best_avg[h]);
    if (highest < players_best_avg[h]){
      highest = players_best_avg[h];
      index = h+1;
    }  
  }
//  printf("highest %.2f\n", highest);
//  printf("index %d\n", index);
  printf("Player #%d had the highest scoring average at %.2f points per game.\n", index, highest); 

  return 0;

}











