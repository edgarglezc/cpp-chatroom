#include "Message.hpp"

namespace Chat 
{
    Message::Message(const std::string& sender)
        : sender_(sender)
    {

    }

    const std::string& Message::getSender() const
    {
        return sender_;
    }

    std::chrono::system_clock::time_point Message::getTimestamp() const
    {
        return timestamp_;
    }
} // namespace Chat
