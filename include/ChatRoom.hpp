#pragma once

// ChatRoom includes
#include <User.hpp>
#include <message/Message.hpp>
#include <MessageManager.hpp>

// cpp includes
#include <string>
#include <unordered_map>
#include <optional>

namespace Chat
{
    class ChatRoom
    {
        private:
            std::unordered_map<std::string, User> users_;
            MessageManager messageManager_;

        public:
            ChatRoom() = default;

            // Users management
            bool registerUser(const std::string&, const std::string&);
            std::optional<User> authenticateUser(const std::string&, const std::string&);
            void removeUser(const std::string&);

            // Sending messages
            void sendMessage(const std::shared_ptr<Message>&);

            // Messages history
            void showChatHistory() const;
            void showUserMessages(const std::string&) const;

            // Utils
            bool userExists(const std::string&) const;

    };
} // namespace Chat