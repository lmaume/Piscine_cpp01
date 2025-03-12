#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <iomanip>
#include <cctype>
#include <limits.h>

#define RED \033[31m
#define GREEN \033[32m
#define WHITE \033[0m

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
Zombie*	zombieHorde( int N, std::string name );

#endif