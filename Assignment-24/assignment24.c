#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(void){
  
  int file_descriptor;

  file_descriptor = open("testfile.txt", O_WRONLY | O_CREAT, S_IRWXU);

  if (file_descriptor < 0){
    printf("The open operation failed...\n");
    return -1;
  } else {
    printf("The open operation succeeded!\n");
    return 0;
  }
}
