#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>

int main(int argc, char *argv[]) {

  struct addrinfo info;
  
  printf("Hello World\n");

  getaddrinfo("192.168.1.21", "80",);

  return 0;
}
