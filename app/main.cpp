#include <iostream>

#include "MessageManager.hpp"
#include "TextMessage.hpp"
#include "ImageMessage.hpp"
#include "VideoMessage.hpp"

int main()
{
    Chat::MessageManager manager;

    // Crear algunos mensajes
    auto msg1 = std::make_shared<Chat::TextMessage>("alice", "Hello world!");
    auto msg2 = std::make_shared<Chat::ImageMessage>("bob", "/images/photo1.jpg", "jpg", 800, 600);
    auto msg3 = std::make_shared<Chat::VideoMessage>("alice", "/videos/video1.mp4", 120);

    // Agregarlos al manager
    manager.addMessage(msg1);
    manager.addMessage(msg2);
    manager.addMessage(msg3);

    std::cout << "\n📜 All Messages:\n";
    manager.printAllMessages();

    std::cout << "\n🔎 Messages by user 'alice':\n";
    manager.printMessagesBySender("alice");

    return 0;
}