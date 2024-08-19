#include <stdio.h>

float get_average(int *grades);

int main(void){

  // init vars
  int grades[10];
  int test_grade;
  int index = 0;
  char input;

  // cleaning array
  for (int y = index; y < 10; y++){
    grades[y] = 0;
  } 
  // get input
  do {
    printf("Enter a test score: ");
    scanf("%i", &test_grade);
    grades[index] = test_grade;
    printf("Would you like to continue? Y/N ");
    scanf(" %c", &input);
    if (input == 'n' || input == 'N'){
      break;
    }
    index++;
  } while (index < 10);

  
  for (int x = 0; x < 10; x++){
    printf("%i\n", grades[x]);
  }

  // output
  printf("%.2f is the average\n", get_average(grades));

  return 0;

}

float get_average(int *arr){

  int count = 0;
  float total = 0;
  int grade_count = 0;
  for (int x = 0; x < 10; x++){
    if (arr[x] != 0){
      total += arr[x];
      count++;
    }
  }
  total = total / count;
  return total;

}
