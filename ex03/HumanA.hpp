#ifndef HUMANA_H
# define HUMANA_H

#include <iostream>
#include <iomanip>
#include <cctype>
#include <limits.h>
#include "Weapon.hpp"

#define RED \033[32m
#define GREEN \033[32m
#define WHITE \033[0m

class HumanA
{
	private:
		std::string	_Name;
		Weapon		&_Weapon;
	public:
		void		Attack();
		void		SetWeapon(Weapon &Weapon);
		void		SetName(std::string name);
		std::string	GetName();
		HumanA(std::string name, Weapon &Weapon);
		~HumanA(void);
};

#endif