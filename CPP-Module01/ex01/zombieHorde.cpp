#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *zHord = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		zHord[i].setName(name);
	}
	return (zHord);
}