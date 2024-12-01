# include "SockTor.h"




int main(int argc,char *argv[])
{
    char*host;
    int port;

    if (argc < 3)
    {
        //fprintf is like printf but takes an additional argument : where to send the output  
        fprintf(stderr,"Usage : %s <host> <port>\n",argv[0]);

        return -1;
        
    }
    host = argv[1];
    // argv[2] is a number in string format , we need to convert it to an actual number 
    port = atoi(argv[2]);

}