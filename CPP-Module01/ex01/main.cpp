#include "Zombie.hpp"

int main()
{
	int i = 3;
	Zombie *newZZ;
	newZZ = zombieHorde(i, "test");
	while(i--)
		newZZ[i].announce();
	delete [] newZZ;
	return 0; 
}