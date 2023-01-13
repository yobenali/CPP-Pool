#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    this->guard = false;
    std::cout << "ScavTrap Default Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    this->guard = false;
    std::cout << "ScavTrap Constructor called for "<< this->name << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Default Destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    
}
