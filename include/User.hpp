#pragma once

#include <string>

class User
{
private:
    std::string name_;
    std::string password_;

public:
    User() = default;
    User(const std::string&, const std::string&);

    std::string getName() const;
    std::string getPassword() const;

    bool authenticate(const std::string&);
};
