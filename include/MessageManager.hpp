#pragma once

// ChatRoom includes
#include "message/Message.hpp"

// cpp includes
#include <vector>
#include <memory>
#include <string>

namespace Chat
{
    class MessageManager
    {
        private:
            std::vector<std::shared_ptr<Message>> messages_;

        public:
            // Add a message to history
            void addMessage(std::shared_ptr<Message>);

            // Get all messages
            const std::vector<std::shared_ptr<Message>>& getAllMessages() const;

            // Show all messages
            void printAllMessages() const;

            // Show all messages by sender
            void printMessagesBySender(const std::string&) const;

            void printMessage(std::shared_ptr<Message>) const;

            // TODO
            // Save or load messages from a file
            // Save messages to a file
            // Load messages from a file
    };
} // namespace Chat