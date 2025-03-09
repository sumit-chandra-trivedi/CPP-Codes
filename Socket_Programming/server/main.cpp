#include <iostream>
#include <WinSock2.h>
#include <WS2tcpip.h>
#include <tchar.h>

using namespace std;

#pragma comment(lib,"ws2_32.lib")
/*
    Initialise winsock library
    create the socket 
    get ip and port
    bind the ip/port with the socket
    listen on the socket
    accept
    recv and send
    close the socket


*/

bool Initialize()
{
    WSADATA data;
    return WSAStartup(MAKEWORD(2,2), &data) == 0; 
}

int main()
{
    if(!Initialize())
    {
        cout<<"winsock initialisation failed "<<endl;
        return 1;
    }

    cout<<"server program "<<endl;

    SOCKET listenSocket = socket(AF_INET,SOCK_STREAM,0);

    if(listenSocket == INVALID_SOCKET)
    {
        cout<<"SOCKET CREATION FAILED "<<endl;
        return 1;
    }


    //Create address structure
    int port = 12345;
    sockaddr_in serveraddr;
    serveraddr.sin_family = AF_INET;
    serveraddr.sin_port = htons(port);

    //convert the IP adreess (0.0.0.0) put it inside the sin_family 
    if(InetPton(AF_INET,_T("0.0.0.0"), &serveraddr.sin_addr) != 1)
    {
        cout<<"setting address structure failed "<<endl;
        closesocket(listenSocket);
        WSACleanup();
        return 1;
    }

    //bind
    if(bind(listenSocket,reinterpret_cast<sockaddr*>(&serveraddr),sizeof(serveraddr)) == SOCKET_ERROR )
    {
        cout<<"BIND FAILED "<<endl;
        closesocket(listenSocket);
        WSACleanup();
        return 1;
    }


    //listen
    if(listen(listenSocket,SOMAXCONN) == SOCKET_ERROR)
    {
        cout<<"LISTEN FAILED "<<endl;
        closesocket(listenSocket);
        WSACleanup();
        return 1;
    }

    cout<<"server has started listening on port "<<port<<endl;

    //start accepting the connection from the client
    SOCKET clientSocket = accept(listenSocket, nullptr, nullptr);
    if(clientSocket == INVALID_SOCKET)
    {
        cout<<"Invalid client socket "<<endl;
    }

    char buffer[4096];
    int bytesrecvd = recv(clientSocket, buffer, sizeof(buffer),0);

    string message(buffer, bytesrecvd);
    cout<<"message from client : "<<message <<endl;

    closesocket(clientSocket);
    closesocket(listenSocket);
    WSACleanup();
    return 0;
}