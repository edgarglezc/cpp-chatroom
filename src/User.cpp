#include "User.hpp"

User::User(const std::string& name, const std::string& password)
    : name_(name), password_(password)
{

}

std::string User::getName() const
{
    return name_;
}

std::string User::getPassword() const
{
    return password_;
}