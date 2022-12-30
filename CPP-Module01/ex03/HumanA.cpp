#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &WeaponA): WeaponA(WeaponA)
{
    this->name = name;
    std::cout << "The default Constructor called for " << this->name << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "Default destructor called for : "<< this->name << std::endl;
}

void    HumanA::attack()
{
    std::cout << this->name << " attacks with their " << WeaponA.getType() << std::endl;
}

void    HumanA::setWeapon(Weapon WeaponA)
{
    this->WeaponA = WeaponA;
}