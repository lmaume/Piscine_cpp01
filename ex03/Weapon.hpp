#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>
#include <iomanip>
#include <cctype>
#include <limits.h>

class Weapon
{
	private:
		std::string	_Type;
	public:
		void		SetType(std::string Type);
		std::string	GetType();
		Weapon(std::string type);
		Weapon(void);
		~Weapon(void);
};

#endif