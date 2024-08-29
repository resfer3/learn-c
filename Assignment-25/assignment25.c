#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(void){
  // open file
  int file_descriptor;

  file_descriptor = open("testfile.txt", O_WRONLY | O_CREAT, S_IRWXU);

  if (file_descriptor < 0){
    printf("The open operation failed...\n");
    return -1;
  }
  else {
    printf("The open operation succeeded!\n");
  }
  
  // write to file
  // 31 bytes long to allow space for newline character
  int writertn;

  writertn = write(file_descriptor, "Writing test data to the file.\n", 31);

  if (writertn != 31){
    printf("The write operation failed...\n");
    return -1;
  }
  else {
    printf("The write operation succeeded!\n");
  }

  // close file
  int close_file;

  close_file = close(file_descriptor);
  if (close_file < 0){
    printf("The close operation failed...\n");
    return -1;
  }
  else {
    printf("The close operation succeeded!\n");
    return 0;
  }
}
