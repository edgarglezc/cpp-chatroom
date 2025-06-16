#include "VideoMessage.hpp"

namespace Chat
{
    VideoMessage::VideoMessage(const std::string& sender, const std::string& filePath, int duration)
        : Message(sender), filePath_(filePath), duration_(duration)
    {

    }

    std::string     VideoMessage::getFilePath()     const
    {
        return  filePath_;
    }

    int             VideoMessage::getDuration()     const
    {
        return  duration_;
    }

    std::string     VideoMessage::getType()         const
    {
        return  "VideoMessage";
    }

    std::string     VideoMessage::getContent()      const
    {
        return  filePath_ +
                " (" +
                std::to_string(duration_) +
                "s)";
    }
}