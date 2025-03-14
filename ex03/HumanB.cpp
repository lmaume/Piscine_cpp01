#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name)
{
	SetName(name);
}

HumanB::~HumanB(void)
{
	std::cout << this->_Name << "\033[31m ended happy with their family\033[0m" << std::endl;
}

void	HumanB::Attack()
{
	std::cout << _Name << " attacks with their " << this->_Weapon->GetType() << std::endl;
}

void	HumanB::SetWeapon(Weapon Weapon)
{
	this->_Weapon = &Weapon;
}

void	HumanB::SetName(std::string name)
{
	if (name != "" && name.empty() == false)
		this->_Name = name;
	else
		this->_Name = "John Doe";
}
