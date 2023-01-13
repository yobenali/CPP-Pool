#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    this->name = "Default";
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "FragTrap Default Constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &obj)
{
    *this = obj;
    std::cout << "FragTrap Copy Constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "FragTrap Constructor called for "<< this->name << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called for " << this->name << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if (hitPoints > 0 && energyPoints > 0)
    {
        std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
        energyPoints--;
    }
    else if (energyPoints == 0)
    {
        std::cout << "FragTrap " << this->name << " can't attacks " << target << ", cause it has no energy Points left." << std::endl; 
    }
    else
        std::cout << "FragTrap " << this->name << " is already dead " << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &obj)
{
    this->name = obj.name;
    this->hitPoints = obj.hitPoints;
    this->energyPoints = obj.energyPoints;
    this->attackDamage = obj.attackDamage;
    std::cout << "FragTrap Copy assignment operator called" << std::endl;
    return *this;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "High Fives ;D" << std::endl;
}