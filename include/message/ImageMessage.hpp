#pragma once

/// ChatRoom includes
#include "Message.hpp"

/// cpp includes
#include <string>

namespace Chat
{
    class ImageMessage : public Message 
    {
    private:
        std::string path_;
        std::string format_;
        int width_;
        int height_;

    public:
        ImageMessage(
            const std::string& sender,
            const std::string& path,
            const std::string& format, 
            int width,
            int height
        );

        std::string getPath() const;
        std::string getFormat() const;
        int getWidth() const;
        int getHeight() const;

        std::string getType() const override;
    };
} // namespace Chat
