#include "TextMessage.hpp"

namespace Chat
{
    TextMessage::TextMessage(const std::string& sender, const std::string& text)
        : Message(sender), text_(text)
    {

    }

    std::string TextMessage::getContent() const
    {
        return text_;
    }

    std::string TextMessage::getType() const
    {
        return "TextMessage";
    }
} // namespace Chat
