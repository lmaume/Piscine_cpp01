#include "Zombie.hpp"

int main()
{
	Zombie* zomb;
	
	zomb = newZombie("bernar");
	randomChump("didier");
	randomChump("");
	zomb->announce();
	delete zomb;
}
