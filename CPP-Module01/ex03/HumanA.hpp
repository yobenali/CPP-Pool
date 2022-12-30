#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA
{
private:
	Weapon &WeaponA;
	std::string name;
public:
	HumanA(std::string name, Weapon &WeaponA);
	~HumanA();
	void	attack();
	void	setWeapon(Weapon WeaponA);
};

#endif