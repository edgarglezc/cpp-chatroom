#pragma once

// ChatRoom includes
#include "Message.hpp"


// cpp includes
#include <string>

namespace Chat
{
    class VideoMessage : public Message 
    {
        private:
            std::string filePath_;
            int duration_;

        public:
            VideoMessage(const std::string&, const std::string&, int);

            std::string getFilePath() const;
            int getDuration() const;

            std::string getType() const override;
            std::string getContent() const override;
    };
} // namespace Chat