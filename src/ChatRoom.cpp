// ChatRoom includes
#include "ChatRoom.hpp"

namespace Chat
{
    bool ChatRoom::registerUser(const std::string& user, const std::string& password)
    {
        if (userExists(user))
        {
            return false;
        }

        User newUser(user, password);
        users_[user] = newUser;

        return true;
    }

    std::optional<User> ChatRoom::authenticateUser(const std::string& user, const std::string& password)
    {
        if (userExists(user))
        {
            User userObj = users_[user];
            if (userObj.authenticate(password))
            {
                return userObj;
            }
        }

        return std::nullopt;
    }

    void ChatRoom::removeUser(const std::string& user)
    {
        users_.erase(user);
    }

    void ChatRoom::sendMessage(const std::shared_ptr<Message>& msg)
    {
        messageManager_.addMessage(msg);
    }

    void ChatRoom::showChatHistory() const
    {
        messageManager_.printAllMessages();
    }

    void ChatRoom::showUserMessages(const std::string& user) const
    {
        messageManager_.printMessagesBySender(user);
    }

    bool ChatRoom::userExists(const std::string& user) const
    {
        return users_.count(user);
    }
} // namespace Chat