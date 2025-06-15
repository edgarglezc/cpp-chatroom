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

    }

    std::string ImageMessage::getFormat() const
    {

    }

    int ImageMessage::getWidth() const
    {

    }

    int ImageMessage::getHeight() const
    {

    }

    std::string ImageMessage::getType() const
    {

    }
} // namespace Chat