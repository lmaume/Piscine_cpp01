#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _Weapon(weapon)
{
	SetName(name);
	SetWeapon(weapon);
}

HumanA::~HumanA(void)
{
	std::cout << this->_Name << "\033[31m ended sad and alone\033[0m" << std::endl;
}

std::string	HumanA::GetName(){return (this->_Name);}

void	HumanA::Attack()
{
	std::cout << _Name << " attacks with their " << _Weapon.GetType() << std::endl;
}

void HumanA::SetName(std::string name)
{
	if (name != "" && name.empty() == false)
		this->_Name = name;
	else
		this->_Name = "John Doe";
}

void	HumanA::SetWeapon(Weapon &Weapon)
{
	_Weapon = Weapon;
}
