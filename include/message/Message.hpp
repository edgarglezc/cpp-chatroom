#pragma once

#include <string>
#include <chrono>

namespace Chat 
{
    class Message
    {
    protected:
        std::string sender_;
        std::chrono::system_clock::time_point timestamp_;

    public:
        Message(const std::string&);
        virtual ~Message() = default;

        const std::string& getSender() const;
        std::chrono::system_clock::time_point getTimestamp() const;

        virtual std::string getType() const = 0;
        virtual std::string getContent() const = 0;
    };
} // namespace Chat
