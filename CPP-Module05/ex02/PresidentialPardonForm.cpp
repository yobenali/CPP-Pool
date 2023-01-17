#include "PresidentialPardonForm.hpp"
Presidential::Presidential(std::string target)
{
    std::cout << "The " << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

Presidential::Presidential(const Presidential &obj)
{
    *this = obj;
}

Presidential &Presidential::operator=(const Presidential &obj)
{
    *this = obj;
    return (*this);
}

Presidential::~Presidential()
{
}