#include <stdio.h>
#include <unistd.h>
#include <dlfcn.h>
// hook function call
ssize_t write(int our_fd, const void* our_buf, size_t our_count){
// new in-between call
  ssize_t (*new_write)(int our_fd, const void* our_buf, size_t our_count);
  new_write = dlsym(RTLD_NEXT, "write");
  char our_buf[50];
  size_t our_nbytes;
  ssize_t bytes_write;
  if (\ == 13){
    strcpy(our_buf, "Goodbye, cruel world");
    bytes_write = new_write(our_fd,
  } 

}
