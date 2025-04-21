#include "harl.hpp"

Harl::Harl(void)
{
	_pComplain[0] = &Harl::_debug;
	_pComplain[1] = &Harl::_info;
	_pComplain[2] = &Harl::_warning;
	_pComplain[3] = &Harl::_error;
}


Harl::~Harl(void){}

void	Harl::_debug( void )
{std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;}
void	Harl::_info( void )
{std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;}

void	Harl::_warning( void )
{std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;}

void	Harl::_error( void )
{std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;}

void Harl::complain( std::string level )
{
	std::string string[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (level == string[i])
		{
			(this->*_pComplain[i])();
			return ;
		}
	}
	std::cout << "I don't like your attitude, please select a complain level between 'DEBUG', 'INFO', 'WARNING' and 'ERROR'.\n";
}
