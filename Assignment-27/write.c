#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>

int main(void){
  char buf[50];
  size_t nbytes;
  ssize_t bytes_written;
  int fd;

  strcpy(buf, "Hello, World!\n");
  nbytes = strlen(buf);

  bytes_written = write(fd, buf, nbytes);

  printf("I broke it!!! :)\n");

  return bytes_written;
}
