#include <iostream>
#include <string>
#include <vector>
#include <ctime>

// Simulating a database for blog posts
struct Post {
    int id;
    std::string title;
    std::string date;
};

class PersonalWebsiteBackend {
private:
    std::string serverName = "Jinguji_Server_v1.0";
    std::vector<Post> blogPosts;

public:
    PersonalWebsiteBackend() {
        // Pre-load some sample data
        blogPosts.push_back({1, "My First VR Experience", "2026-02-01"});
        blogPosts.push_back({2, "C++ Backend Learning Journey", "2026-02-05"});
    }

    void start(int port) {
        std::cout << "[" << serverName << "] Initializing components..." << std::endl;
        std::cout << "[" << serverName << "] Database connected." << std::endl;
        std::cout << "[" << serverName << "] Server started on port: " << port << std::endl;
    }

    void listPosts() {
        std::cout << "\n--- Current Blog Posts ---" << std::endl;
        for (const auto& post : blogPosts) {
            std::cout << "ID: " << post.id << " | Title: " << post.title << " | Date: " << post.date << std::endl;
        }
    }
};

int main() {
    PersonalWebsiteBackend site;
    site.start(80); // Using standard HTTP port
    site.listPosts();
    
    std::cout << "\nServer is now waiting for incoming connections..." << std::endl;
    return 0;
}
