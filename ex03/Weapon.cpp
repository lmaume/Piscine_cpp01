#include "Weapon.hpp"

Weapon::Weapon(void)
{
	// std::cout << "\033[32mNew Weapon just popped out of nowhere\033[0m" << std::endl;
}

Weapon::Weapon(std::string name)
{
	SetType(name);
}

Weapon::~Weapon(void)
{
	// std::cout << this->_Type << "\033[31m broke\033[0m" << std::endl;
}

std::string	Weapon::GetType(){return this->_Type;};

void	Weapon::SetType(std::string Type)
{
	if (Type.empty() == false)
		this->_Type = Type;
}
