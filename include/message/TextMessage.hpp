#pragma once
#include "Message.hpp"
#include <string>

namespace Chat 
{
    class TextMessage : public Message 
    {
    private:
        std::string text_;

    public:
        TextMessage(const std::string&, const std::string&);

        std::string getContent() const override;

        std::string getType() const override;
    };
} // namespace Chat
