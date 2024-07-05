#include <netdb.h>
#include <netinet/in.h>
#include <stdio.h>
#include <sys/socket.h>
#include <sys/types.h>

int main(int argc, char *argv[]) {
  struct sockaddr_in sin = {.sin_family = AF_INET,
                            .sin_port = htons(4534),
                            .sin_addr.s_addr = htons(192168121)};

  // memset(sin.sin_zero, 0, sizeof(sin.sin_zero));
  struct addrinfo info;

  printf("Hello World\n");

  // getaddrinfo("192.168.1.21", "80",);

  return 0;
}
