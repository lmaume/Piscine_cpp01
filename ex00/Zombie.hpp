#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <iomanip>
#include <cctype>
#include <limits.h>

class Zombie
{
	private:
		std::string	Name;
	public:
		void	announce( void );
		void	SetName(std::string name);
		Zombie(void);
		~Zombie(void);
};

void	randomChump( std::string name );
Zombie*	newZombie( std::string name );

#endif