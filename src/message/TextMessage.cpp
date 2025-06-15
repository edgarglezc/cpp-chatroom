#include "TextMessage.hpp"

namespace Chat
{
    TextMessage::TextMessage(const std::string& sender, const std::string& text)
        : Message(sender), text_(text)
    {

    }
} // namespace Chat
