#include "PresidentialPardonForm.hpp"
Presidential::Presidential(std::string target): target(target)
{
    std::cout << "The " << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

Presidential::Presidential(const Presidential &obj)
{
    *this = obj;
}

Presidential &Presidential::operator=(const Presidential &obj)
{
    if (this != &obj)
        this->target = obj.target;
    return (*this);
}

Presidential::~Presidential()
{
}