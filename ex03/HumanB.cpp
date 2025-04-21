#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name)
{
	SetName(name);
	_Weapon = NULL;
}

HumanB::~HumanB(void)
{
	std::cout << this->_Name << "\033[31m ended happy with their family\033[0m" << std::endl;
}

void	HumanB::Attack()
{

	if (_Weapon != NULL)
		std::cout << _Name << " attacks with their " << _Weapon->GetType() << std::endl;
	else
		std::cout << _Name << " attacks with their bare hands" << std::endl;
}

void HumanB::SetWeapon(Weapon &weapon)
{
	_Weapon = &weapon;
}

void	HumanB::SetName(std::string name)
{
	if (name != "" && name.empty() == false)
		this->_Name = name;
	else
		this->_Name = "John Doe";
}

std::string	HumanB::GetName()
{return (this->_Name);}
