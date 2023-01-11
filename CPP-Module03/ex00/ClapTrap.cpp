#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Default constructor called" << std::endl;
    this->name = name;
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

void    ClapTrap::attack(const std::string& target)
{
    std::cout << "ClapTrap " << this->name << " attacks " << target;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (hitPoints > 0 && energyPoints > 0)
    {
        std::cout << ", causing " << amount << " points of damge!" << std::endl;
        energyPoints--;
    }
    else if (energyPoints == 0)
        std::cout << "ClapTrap doesn't have enough energy" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (hitPoints > 0 && hitPoints < 10)
        hitPoints += amount;
    else if (hitPoints == 0)
        std::cout << "ClapTrap doesn't have enough hit points" << std::endl;
}