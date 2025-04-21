#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>
#include <iomanip>
#include <cctype>
#include <limits.h>

#define RED \033[32m
#define GREEN \033[32m
#define WHITE \033[0m

class Weapon
{
	private:
		std::string	_Type;
	public:
		void		SetType(std::string Type);
		bool		GetStatus();
		const std::string	&GetType() const;
		Weapon(std::string type);
		Weapon(void);
		~Weapon(void);
};

#endif