#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name), WeaponB(NULL)
{
    std::cout << "The default Constructor called for : " << this->name << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "Default destructor called for : "<< this->name << std::endl;
}

void    HumanB::attack()
{
    if(this->WeaponB)
        std::cout << this->name << " attacks with their " << WeaponB->getType() << std::endl;
}



void    HumanB::setWeapon(Weapon & WeaponB)
{
    this->WeaponB = &WeaponB;
}