#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>

int main(void){
    
    //socket creation
    int sockfd = 0;
    sockfd = socket(AF_INET, SOCK_STREAM, 0);//create socket
    if(sockfd == -1){
        printf("Fail to create a socket");
    }

    //socket connection
    struct sockaddr_in info;
    bzero(&info,sizeof(info));
    info.sin_family = PF_INET;
    info.sin_addr.s_addr = inet_addr("127.0.0.1");
    info.sin_port = htons(8080);
    int err = connect(sockfd,(struct sockaddr *)&info,sizeof(info));
    if(err==-1){
        print("Connection error");
    }

    return 0;




}
