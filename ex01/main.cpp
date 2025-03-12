#include "Zombie.hpp"

int main()
{
	Zombie* zomb;
	Zombie*	horde;
	
	horde = zombieHorde(8, "albert");
	zomb = newZombie("bernar");
	randomChump("didier");
	randomChump("");
	zomb->announce();
	for (int i = 0; i < 8; i++)
		horde[i].announce();
	delete zomb;
	delete []horde;
}
