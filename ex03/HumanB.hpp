#ifndef HUMANB_H
# define HUMANB_H

#include <iostream>
#include <iomanip>
#include <cctype>
#include <limits.h>
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string	_Name;
		Weapon		*_Weapon;
	public:
		void	Attack();
		void	SetName(std::string name);
		void	SetWeapon(Weapon Weapon);
		HumanB(std::string name);
		~HumanB(void);
};

#endif