#include <iostream>
#include <memory>
#include "ChatRoom.hpp"
#include "TextMessage.hpp"

int main()
{
    Chat::ChatRoom chat;

    // Registrar usuarios
    if (chat.registerUser("alice", "password123"))
        std::cout << "User alice registered.\n";
    else
        std::cout << "User alice registration failed.\n";

    if (chat.registerUser("bob", "mypassword"))
        std::cout << "User bob registered.\n";

    // Intentar registrar un usuario existente
    if (!chat.registerUser("alice", "newpass"))
        std::cout << "User alice already exists.\n";

    // Autenticar usuario
    auto userOpt = chat.authenticateUser("alice", "password123");
    if (userOpt)
        std::cout << "User alice authenticated successfully.\n";
    else
        std::cout << "User alice authentication failed.\n";

    // Crear y enviar mensajes
    auto msg1 = std::make_shared<Chat::TextMessage>("alice", "Hello, this is Alice!");
    auto msg2 = std::make_shared<Chat::TextMessage>("bob", "Hi Alice, this is Bob.");

    chat.sendMessage(msg1);
    chat.sendMessage(msg2);

    // Mostrar todo el historial de mensajes
    std::cout << "\n=== Chat History ===\n";
    chat.showChatHistory();

    // Mostrar mensajes de un usuario específico
    std::cout << "\n=== Messages from alice ===\n";
    chat.showUserMessages("alice");

    return 0;
}
