#include "Zombie.hpp"

Zombie::Zombie(void){std::cout << "le zombinator3000 created a zombie again !!\nWHAT WILL WE DOOOOoO ?!?!?!?" << std::endl;}

Zombie::~Zombie(void)
{
	std::cout << this->Name << " has been slain." << std::endl;
}

void	Zombie::announce()
{
	std::cout << this->Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::SetName(std::string name)
{
	if (name != "" && name.empty() == false)
		this->Name = name;
	else
		this->Name = "PLEASE NAME ME MASTER OF ALL THING THAT EXISTS";
}
