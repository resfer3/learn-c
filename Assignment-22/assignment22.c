#include <stdio.h>

struct stats {

  int points;
  int games;

};

// init var
struct stats player[5] = {0};
size_t check_arr(void);

int main(void){

  // checking if every int is 0 in the array of the struct
  // size_t = count of bytes
  size_t arr_length = check_arr();
  
  // prompt point total
  for (int x = 0; x < arr_length; x++){
    printf("Enter Player %d's point total: ", x + 1);
    scanf("%d", &player[x].points);
    printf("Enter Player %d's game total: ", x + 1);
    scanf("%d", &player[x].games);
  }
  
  // checking if array is filled
  arr_length = check_arr();

  // get average
  for (int y = 0; y < arr_length; y++){
    printf("Player %d's scoring average was %.2f ppg\n", y + 1, (float) player[y].points / player[y].games);
  }

  return 0;
  

}

size_t check_arr(void){
 
  // length
  // size_t = count of bytes
  size_t arr_length = sizeof(player)/sizeof(player[0]);
  printf("%zu\n", arr_length);
  // check values
  for (int i = 0; i < arr_length; i++){
    printf("points: %d games: %d\n", player[i].points, player[i].games);
  } 

  return arr_length;

}
