#include "Zombie.hpp"

Zombie	*newZombie( std::string name )
{
	Zombie	*zomb = new Zombie;
	zomb->SetName(name);
	return (zomb);
}
