#include "Zombie.hpp"

int main()
{
	Zombie *newZZ;
	newZZ = zombieHorde(10, "test");
	for (int i = 0; i < 10; i++)
	{
		newZZ[i].announce();
	}
	delete [] newZZ;
	return 0; 
}