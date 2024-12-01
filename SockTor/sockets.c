// for more info on the functions used , refer to the man command for each of the function 
# include <stdio.h> 
# include <sys/socket.h>
# include <netinet/in.h>
# include <arpa/inet.h>
# define IP "" // www.google.com
# define PORT 80 
int main(){
    int s ;
    sock_addr_in sock;
    
    s = socket(AF_INET, SOCK_STREAM,0 ); // int domain , int domain type , int protocol 
    if(s<0){
        printf("socket() error\n");
        return -1;
    }

    sock.sin_addr.s_addr = inet_addr(IP); // the target IP 

    















}