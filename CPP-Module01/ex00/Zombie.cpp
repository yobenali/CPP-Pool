#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	setName(name);
	std::cout << "The Constructor called" << std::endl; 
}

Zombie::Zombie()
{
	std::cout << "Default Constructor called" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Default destructor called for : "<< this->name << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}
 
std::string Zombie::getName()
{
	return this->name;
}

void Zombie::announce(void)
{
	std::cout << getName() << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void	randomChump(std::string name)
{
	Zombie a(name);
	a.announce();
}

Zombie* newZombie(std::string name)
{
	Zombie *zName = new Zombie(name);
	return (zName);
}