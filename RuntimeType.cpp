#include<iostream>
#include<fstream>
#include<winsock.h>
#define PORT 9999

using namespace std;

int nListener = 0;
struct sockaddr_in srv;

int main(){
    WSADATA ws;
    if(WSAStartup(MAKEWORD(2,2), &ws) < 0){
        cout << "WSAStartup Failed.." << endl;
        return EXIT_FAILURE;
    }

    nListener = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if(nListener < 0){
        cout << "Not able to open the Socket.." << endl;
        return EXIT_FAILURE;
    }

    srv.sin_family = AF_INET;
    srv.sin_port = htons(PORT);
    srv.sin_addr.s_addr = INADDR_ANY;
    



    return 0;
}