#include <stdio.h>

void hello(void){
  
  char array[] = {72, 101, 108, 108, 111, 44, 32, 87, 111, 114, 108, 100, 33};

  //printf("%s", array);
  puts(array);

}

void hello2(void){

  char array[] = {72, 101, 108, 108, 111, 44, 32, 87, 111, 114, 108, 100, 33, '\0'};

  //printf("%s", array);
  puts(array);

}

int main(void){

  //hello();
  //printf("\n");
  hello2();
  //printf("\n");
  
  return 0;
}
