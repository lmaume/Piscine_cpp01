#include "Zombie.hpp"

Zombie::Zombie(void){std::cout << "\033[32mle zombinator3000 created a zombie again !!\033[0m" << std::endl;}

Zombie::~Zombie(void)
{
	std::cout << this->Name << "\033[91m has been slain.\033[0m" << std::endl;
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
