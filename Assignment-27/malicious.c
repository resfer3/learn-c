#include <stdio.h>
#include <unistd.h>
#include <dlfcn.h>
#include <string.h>

// hook function call
ssize_t write(int fd, const void* buf, size_t nbytes){
// new in-between call
  ssize_t (*new_write)(int fd, const void* buf, size_t nbytes);
  new_write = dlsym(RTLD_NEXT, "write");
  char my_str[50];
  ssize_t my_bytes_written;

  // nbytes == 14 : Hello, World!\n 
  if (nbytes == 14){
    strcpy(my_str, "Goodbye, cruel world!\n");
    nbytes = strlen(my_str);
    my_bytes_written = new_write(fd, my_str, nbytes);  
  } 
  else {
    my_bytes_written = new_write(fd, buf, nbytes); 
  }

  return my_bytes_written;
}
