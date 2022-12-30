#include "Zombie.hpp"

int main()
{
	Zombie *newZZ;

	newZZ = newZombie("Hated");
	newZZ->announce();
	delete  newZZ;
	randomChump("riyad");
	return 0; 
}