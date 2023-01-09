#include "Zombie.hpp"

int main()
{
	Zombie *newZZ;

	newZZ = newZombie("HTD");
	newZZ->announce();
	delete  newZZ;
	randomChump("test");
	return 0; 
}