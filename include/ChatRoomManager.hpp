#pragma once

// ChatRoom includes
#include "ChatRoom.hpp"

// cpp includes
#include <memory>
#include <string>
#include <optional>
#include <unordered_map>

namespace Chat
{
    class ChatRoomManager
    {
        private:
            std::unordered_map<std::string, std::shared_ptr<ChatRoom>> channels_;

        public:
            ChatRoomManager() = default;

            // Room management
            bool createRoom(const std::string& roomName);
            bool removeRoom(const std::string& roomName);
            std::shared_ptr<ChatRoom> getRoom(const std::string& roomName) const;
            bool roomExists(const std::string& roomName) const;
            void listRooms() const;
    };
}