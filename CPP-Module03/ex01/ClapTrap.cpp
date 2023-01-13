#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    this->name = "Default";
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
    std::cout << "ClapTrap Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
    *this = obj;
    std::cout << "ClapTrap Copy Constructor called" << std::endl;
}


ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
    std::cout << "ClapTrap Constructor called For "<< this->name << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called for " << this->name << std::endl;
}

void    ClapTrap::attack(const std::string& target)
{
    if (hitPoints > 0 && energyPoints > 0)
    {
        std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
        energyPoints--;
    }
    else if (energyPoints == 0)
    {
        std::cout << "ClapTrap " << this->name << " can't attacks " << target << ", cause it has no energy Points left." << std::endl; 
    }
    else
        std::cout << "ClapTrap " << this->name << " is already dead " << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (hitPoints > 0)
    {
        hitPoints -= amount;
        std::cout << "ClapTrap " << this->name << " Taked damage amount " << amount << " it has " << this->hitPoints << " hit Points left." << std::endl;
    }
    else if (hitPoints == 0)
        std::cout << "ClapTrap " << this->name << " doesn't have enough hit Points" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (hitPoints > 0 && energyPoints > 0)
    {
        hitPoints += amount;
        energyPoints--;
        std::cout << "Claptrap " << this->name << " repaired itself by adding " << amount << " to hit Points." << std::endl;
    }
    else if (energyPoints == 0)
        std::cout << "ClapTrap " << this->name <<" doesn't have enough energy points" << std::endl;
    else if (hitPoints == 0)
        std::cout << "ClapTrap can't be Repaired cause already is dead " << std::endl;
}

ClapTrap    &ClapTrap::operator=(const ClapTrap &obj)
{
    this->name = obj.name;
    this->hitPoints = obj.hitPoints;
    this->energyPoints = obj.energyPoints;
    this->attackDamage = obj.attackDamage;
    std::cout << "ClapTrap Copy assignment operator called" << std::endl;
    return *this;
}
