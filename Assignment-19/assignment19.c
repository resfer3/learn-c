#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

  // init var
  char *ptr;

  // allocate
  ptr = malloc(sizeof(char) * 4);

  // check null
  if (ptr == NULL){

    printf("Memory failed to allocate\n");
    return 1;

  }
  else {

    printf("Memory was successfully allocated\n");

  }
  // if there is garbage, if not then allocated succesfully
  for (int i = 0; i < strlen(ptr); i++){
    printf("%c\n", ptr[i]);
  }

  free(ptr);

  return 0;
  


}
