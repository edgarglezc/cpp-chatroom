// ChatRoom includes
#include "ImageMessage.hpp"

namespace Chat
{
    ImageMessage::ImageMessage(
        const std::string& sender,
        const std::string& path,
        const std::string& format, 
        int width,
        int height
    ) : Message(sender),
        path_(path),
        format_(format),
        width_(width),
        height_(height)
    {
    }

    std::string ImageMessage::getPath() const
    {
        return path_;
    }

    std::string ImageMessage::getFormat() const
    {
        return format_;
    }

    int ImageMessage::getWidth() const
    {
        return width_;
    }

    int ImageMessage::getHeight() const
    {
        return height_;
    }

    std::string ImageMessage::getContent() const
    {
        return  path_ + 
                " (" + 
                std::to_string(width_) + 
                "x" + 
                std::to_string(height_) +
                ")";
    }

    std::string ImageMessage::getType() const
    {
        return "ImageMessage";
    }
} // namespace Chat