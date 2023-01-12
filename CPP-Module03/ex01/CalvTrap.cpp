#include "ClavTrap.hpp"

ClavTrap::ClavTrap(): ClapTrap();
{
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    this->guardGate = false;
    std::cout << "ClapTrap Default Constructor called" << std::endl;
}
