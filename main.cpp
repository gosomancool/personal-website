#include <iostream>
#include <string>

// A simple simulation of a C++ Backend for my personal website
class SimpleServer {
public:
    void start(int port) {
        std::cout << "Starting server on port " << port << "..." << std::endl;
        std::cout << "Personal Website Backend is running." << std::endl;
        std::cout << "Visit http://localhost:" << port << " to view content." << std::endl;
    }

    void handleRequest(std::string path) {
        if (path == "/") {
            std::cout << "Handling Home request" << std::endl;
        } else if (path == "/about") {
            std::cout << "Handling About request" << std::endl;
        }
    }
};

int main() {
    SimpleServer server;
    server.start(8080);
    server.handleRequest("/");
    return 0;
}
