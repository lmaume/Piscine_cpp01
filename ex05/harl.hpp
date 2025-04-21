#ifndef HARL_H
# define HARL_H

#include <iostream>
#include <iomanip>
#include <cctype>
#include <limits.h>
#include <fstream>
#include <string>

#define RED \033[1;31m
#define GREEN \033[32m
#define WHITE \033[0m

class Harl
{
	private:
		void	_debug( void );
		void	_info( void );
		void	_warning( void );
		void	_error( void );
		void	(Harl::*_pComplain[4])();
	public:
		void	complain( std::string level );
		Harl(void);
		~Harl(void);
};

#endif