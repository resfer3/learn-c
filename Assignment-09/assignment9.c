#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool checkStr(char* str);

int main(int argc, char* argv[]){

  // get input
  if (argc != 3){
    printf("Usage: ./assignment9 [firstname] [lastname]\n");
    return 1;
  }
  //check str's
  if (checkStr(argv[1]) && checkStr(argv[2])){
    printf("valid\n");
  }
  else {
    printf("not valid\n");
    return 2;
  }

  // allocate and setup
  int first_name_length = strlen(argv[1]);
  int last_name_length = strlen(argv[2]);
  char* first_name = malloc((first_name_length + 1) * sizeof(char));
  char* last_name = malloc((last_name_length + 1) * sizeof(char));
  
  // copy strings
  for (int i = 0; i < first_name_length; i++){
    
    first_name[i] = argv[1][i];

  }
  for (int i = 0; i < last_name_length; i++){
    
    last_name[i] = argv[2][i];

  }   

  // print output
  printf("Hello, %s %s\n", first_name, last_name);
  
  // free strings
  free(first_name);
  free(last_name);

  return 0;

}

bool checkStr(char* str){

  for (int i = 0; i < strlen(str); i++){
    
    if (!isalpha(str[i])){
      return false;
    }
  }
  return true;
}
