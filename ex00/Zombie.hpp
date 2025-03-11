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
		Zombie*	newZombie( std::string name );
		void	randomChump( std::string name );
		Zombie(void);
		~Zombie(void);
};

#endif