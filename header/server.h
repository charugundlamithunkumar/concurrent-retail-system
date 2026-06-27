

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <stdbool.h>
#include <string.h>
#include <fcntl.h>
#include <pthread.h>
#include <arpa/inet.h>
#include "my_macros.h"

#ifndef SERVER_H
#define SERVER_H

// Utils for connection.
void server(int new_sd);
void *connection(void *nsd);

#endif

