#ifndef HUMANB_H
# define HUMANB_H

#include <iostream>
#include <iomanip>
#include <cctype>
#include <limits.h>
#include "Weapon.hpp"

#define RED \033[32m
#define GREEN \033[32m
#define WHITE \033[0m

class HumanB
{
	private:
		std::string	_Name;
		Weapon		*_Weapon;
	public:
		void	Attack();
		void	SetName(std::string name);
		void	SetWeapon(Weapon &Weapon);
		std::string	GetName();
		HumanB(std::string name);
		~HumanB(void);
};

#endif