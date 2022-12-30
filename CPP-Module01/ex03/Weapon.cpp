#include "Weapon.hpp"

Weapon::Weapon(std::string type): type(type)
{
    std::cout << "the default Constructer called" << std::endl;
}

Weapon::~Weapon()
{
    std::cout << "the default Destructer called" << std::endl;
}

void    Weapon::setType(std::string type)
{
    this->type = type;
}

const std::string& Weapon::getType()
{
    return (this->type);
}