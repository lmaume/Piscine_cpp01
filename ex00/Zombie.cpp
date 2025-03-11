#include "Zombie.hpp"

Zombie::Zombie(void){}

Zombie::~Zombie(void)
{
	std::cout << this->Name;
}

Zombie	*Zombie::newZombie( std::string name )
{
	if (name.empty() == false)
		this->Name = name;
}

void	Zombie::randomChump( std::string name )
{
	
}
