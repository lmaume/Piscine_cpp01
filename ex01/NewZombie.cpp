#include "Zombie.hpp"

Zombie	*newZombie( std::string name )
{
	Zombie	*zomb = new Zombie;
	zomb->SetName(name);
	return (zomb);
}

Zombie* zombieHorde( int N, std::string name )
{
	Zombie*	horde;
	horde = new Zombie[N];
	for (int i = 0; i < N; i++)
		horde[i].SetName(name);
	return (horde);
}
