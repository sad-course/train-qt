#include <cstring>
#include <iostream>
#include <unistd.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <thread>

bool running = true;


void processClientMessage(int clientSocketFd){
    char buffer[1024];

    std::cout << "Thread " << std::this_thread::get_id() << " processing client messages." <<  std::endl;

    while(running){
        size_t bytes = recv(clientSocketFd, buffer, sizeof(buffer), 0);
        if (bytes > 0){
            std::cout << "Client " << clientSocketFd << ": " << buffer << std::endl;
        }

        if (bytes = 0){
            std::cout << "Client exit the chat \n";
            break;
        }

        if (clientSocketFd < 0 || std::string(buffer) == "exit"){
            std::cout << "Client desconected! \n";
            break;
        }
    }

    close(clientSocketFd);
}


int main() {
    int fdSocket = socket(AF_INET, SOCK_STREAM, 0);

    sockaddr_in serverAddr{};
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_addr.s_addr = inet_addr("127.0.0.1");
    serverAddr.sin_port = htons(8080);


    try{
        if (bind(fdSocket, (sockaddr *) &serverAddr, sizeof(serverAddr)) == -1){
            throw std::runtime_error("Server binding error");
        };
        listen(fdSocket, 1);

        sockaddr_in clientAddr;
        socklen_t clientAddrLen = sizeof(clientAddr);

        std::cout << "Server waiting for clients..." << std::endl;


        int clientSocket = accept(
            fdSocket,
            (sockaddr *) &clientAddr,
            &clientAddrLen
        );

        if (clientSocket == -1){
            throw std::runtime_error("Client socket error");
        }
        std::thread(processClientMessage, clientSocket).detach();

    }catch(const std::runtime_error& e){
        std::cerr << "Error: " << e.what() << std::endl;
    }


}