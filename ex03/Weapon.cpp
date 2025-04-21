#include "Weapon.hpp"

Weapon::Weapon(void)
{
	SetType("Default Weapon");
	// std::cout << "\033[32mNew Weapon just dropped \033[0m" << "NONAME" << std::endl;
}

Weapon::Weapon(std::string name)
{
	SetType(name);
	// std::cout << "\033[32mNew Weapon just dropped \033[0m" << name << std::endl;

}

Weapon::~Weapon(void)
{
	// std::cout << this->_Type << "\033[31m broke\033[0m" << std::endl;
}


const std::string	&Weapon::GetType()const{return this->_Type;}

void	Weapon::SetType(std::string Type)
{
	if (Type.empty() == false)
		this->_Type = Type;
}
