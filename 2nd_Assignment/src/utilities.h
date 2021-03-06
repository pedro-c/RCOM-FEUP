#pragma once

#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <netdb.h>
#include <string.h>
#include <strings.h>
#include <termios.h>
#include <fcntl.h>

#define MAXDATASIZE 512

typedef struct Url {
  char * type;
  char * user;
  char * password;
  char * host;
  char * url_path;
} url;

int getInfo(char * str, url * url_info);
int get_filename(char path[100], char * filename);
