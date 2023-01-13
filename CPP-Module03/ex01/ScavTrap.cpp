#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
    this->name = "Default";
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    this->guard = false;
    std::cout << "ScavTrap Default Constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj): ClapTrap(obj)
{
    *this = obj;
    std::cout << "Copy Constructor called" << std::endl;
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
    std::cout << "Destructor called for " << this->name << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (hitPoints > 0 && energyPoints > 0)
    {
        std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
        energyPoints--;
    }
    else if (energyPoints == 0)
    {
        std::cout << "ScavTrap " << this->name << " can't attacks " << target << ", cause it has no energy Points left." << std::endl; 
    }
    else
        std::cout << "ScavTrap " << this->name << " is already dead " << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &obj)
{
    this->name = obj.name;
    this->hitPoints = obj.hitPoints;
    this->energyPoints = obj.energyPoints;
    this->attackDamage = obj.attackDamage;
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}
void ScavTrap::guardGate()
{
    if (this->guard == false)
    {
        this->guard = true;
        std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
    }
    else
        std::cout << "ScavTrap already in Gate keeper mode." << std::endl;
}