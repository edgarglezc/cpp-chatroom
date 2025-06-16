// ChatRoom includes
#include "MessageManager.hpp"

// cpp includes
#include <iostream>

namespace Chat
{
    
    void MessageManager::addMessage(std::shared_ptr<Message> message)
    {
        messages_.push_back(std::move(message));
    }

    const std::vector<std::shared_ptr<Message>>& MessageManager::getAllMessages() const
    {
        return messages_;
    }

    void MessageManager::printAllMessages() const
    {
        for (const auto& msg : messages_)
        {
            printMessage(msg);        
        }
    }

    void MessageManager::printMessagesBySender(const std::string& sender) const
    {
        for (const auto& msg : messages_)
        {
            if (msg->getSender() == sender)
            {
                printMessage(msg);        
            }
        }
    }

    void MessageManager::printMessage(std::shared_ptr<Message> msg) const
    {
        std::time_t time = std::chrono::system_clock::to_time_t(msg->getTimestamp());
        std::string timeStr = std::ctime(&time);

        if (!timeStr.empty() && timeStr.back() == '\n')
        {
            timeStr.pop_back();
        }

        std::cout << "[" << timeStr << "] ";
        std::cout << msg->getSender() << " (" << msg->getType() << "): ";
        std::cout << msg->getContent() << "\n";
    }
}