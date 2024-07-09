#include <arpa/inet.h>
#include <netdb.h>
#include <netinet/in.h>
#include <stdio.h>
#include <sys/socket.h>
#include <sys/types.h>

int main(int argc, char *argv[]) {
  char ip6[INET6_ADDRSTRLEN] = "2601:1c2:4b00:5150::8a";

  // struct sockaddr_in6 sin = {
  //     .sin6_family = AF_INET6,
  //     .sin6_port = htons(4534),
  // };

  // int address_fill = inet_pton(
  //     AF_INET6, "192.168.1.21",
  //     &(sin.sin6_addr)); // Function that allows to convert regular IP address
  //                        // notation into the one that's needed for the struct
  // if (!address_fill)
  //   return 1;

  // memset(sin.sin_zero, 0, sizeof(sin.sin_zero));

  // Status of the connection
  int status;

  // Hints to be used for configuring socket connection
  struct addrinfo hints;

  // Struct pointer, that points to the result
  struct addrinfo *servinfo;



  printf("Hello World\n");

  // The function sets up the structs, not making the connection yet
  if ((status = getaddrinfo("2601:1c2:4b00:5150::8a", "13929", &hints, &servinfo)) != 0) {
    fprintf(stderr, "getaddrinfo error: %s\n", gai_strerror(status));

    exit(1);
  }
  
  freeaddrinfo(&servinfo);
  return 0;
}
