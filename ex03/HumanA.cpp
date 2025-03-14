#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon Weapon)
{
	SetName(name);
	SetWeapon(Weapon);
}

HumanA::~HumanA(void)
{
	std::cout << this->_Name << "\033[31m ended sad and alone\033[0m" << std::endl;
}

void	HumanA::Attack()
{
	std::cout << _Name << " attacks with their " << this->_Weapon->GetType() << std::endl;
}

void HumanA::SetName(std::string name)
{
	if (name != "" && name.empty() == false)
		this->_Name = name;
	else
		this->_Name = "John Doe";
}

void	HumanA::SetWeapon(Weapon Weapon)
{
	this->_Weapon = &Weapon;
}
