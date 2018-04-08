#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
#include <unistd.h>  
#include <sys/socket.h>  
#include <netinet/in.h>  
#include <arpa/inet.h>  
#include <iostream>
using namespace std;
std::string exec(const char* );
int main(int argc, char *argv[])  
{  
    unsigned short port = 22222;             // 端口  
    char *server_ip = "10.0.0.255";    // 受限广播地址  
  
    int sockfd;  
    sockfd = socket(AF_INET, SOCK_DGRAM, 0);        //创建UDP套接字  
    if(sockfd < 0)  
    {  
        perror("socket");  
        exit(-1);  
    }  
      
    struct sockaddr_in dest_addr;  
    bzero(&dest_addr, sizeof(dest_addr));  
    dest_addr.sin_family = AF_INET;  
    dest_addr.sin_port   = htons(port);  
    inet_pton(AF_INET, server_ip, &dest_addr.sin_addr);  
  
    printf("send data to UDP server %s:%d!\n", server_ip, port);  
      
    //设置该套接字为广播类型，这个很重要  
    int opt=1;  
    setsockopt(sockfd, SOL_SOCKET, SO_BROADCAST, &opt, sizeof(opt));  
    //system("sudo ifconfig wlp5s0 |grep 'inet ' |awk '{print $2}'>self_ip.txt");
    //把ip写到广播消息里面
    std::string send_buf_string =exec("ifconfig wlp5s0 |grep 'inet '|awk '{print $2}'");
    
    char send_buf[512] ;
    strcpy(send_buf,send_buf_string.c_str());

    sendto(sockfd, send_buf, strlen(send_buf), 0, (struct sockaddr*)&dest_addr, sizeof(dest_addr));//发送数据  
  
    close(sockfd);  
      
    return 0;  
}  
