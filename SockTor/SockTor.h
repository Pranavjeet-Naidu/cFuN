# include <stdio.h>
# include <stdlib.h>
# include <string.h>
//to deal with the strings 
# include <unistd.h>
// used to access the POSIX API , includes functionality for system calls and standard I/O operations 
# include <sys/socket.h>
// for the socket and connect functions 
# include <arpa/inet.h>
// used for the close , htons 
# include <netinet/in.h>
// used for the inet_addr function

#define PROXY       "127.0.0.1" // default
#define PROXYPORT   9050        //default 


socket()
connect()
close()
htons()
inet_addr()

typedef unsigned char int8 ; 
typedef unsigned short int int16 ; 
typedef unsigned int int32 ; 

struct proxy_request{
    int8 vn ; 
    int8 cd ; 
    int16 dstport ; 
    int32 dstip;
    unsigned char userid[8];
}

typedef struct proxy_request Req;
typedef struct proxy_response Res;

struct proxy_response{
    int8 vn ;  
    int8 cd ; 
    int16 _ ; 
    int32 __;
}