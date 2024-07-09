#include <arpa/inet.h>
#include <netdb.h>
#include <netinet/in.h>
#include <stdio.h>
#include <sys/socket.h>
#include <sys/types.h>

int main(int argc, char *argv[]) {
  char ip6[INET6_ADDRSTRLEN] = "2601:1c2:4b00:5150::8a";

  struct sockaddr_in6 sin = {
      .sin6_family = AF_INET6,
      .sin6_port = htons(4534),
  };

  int address_fill = inet_pton(
      AF_INET6, "192.168.1.21",
      &(sin.sin6_addr)); // Function that allows to convert regular IP address
                         // notation into the one that's needed for the struct
  if (!address_fill)
    return 1;

  // memset(sin.sin_zero, 0, sizeof(sin.sin_zero));
  struct addrinfo info;

  printf("Hello World\n");

  // getaddrinfo("192.168.1.21", "80",);

  return 0;
}
