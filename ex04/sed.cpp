#include "sed.hpp"

Sed::Sed(){}
Sed::~Sed(void){}

void	Sed::SetInfos(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "please specify a file, a string to replace and by what (file s1 s2)" << std::endl;
		return ;
	}
	this->_fileName = argv[1];
	this->_s1 = argv[2];
	this->_s2 = argv[3];
}

void	Sed::openFile(void)
{
	std::string name = getFileName();
	name.append(".replace");
	
	_file.open(getFileName().c_str(), std::ios::in);
	_myFile.open(name.c_str(), std::ios::out);
	if (_file.is_open() == false || _myFile.is_open() == false)
	{
		std::cout << "\033[1;31m\n\tdid not open file\033[0m\n" << std::endl;
		return;
	}
	std::cout << "\033[32m\n\tit worked\033[0m\n" << std::endl;
}

void	Sed::FillFile(void)
{
	std::string	String;
	std::string	StringTemp;
	std::string	StringCopy;
	size_t		iter = 0;

	if (_s1 == _s2)
	{
		while (std::getline(_file, String))
			_myFile << String << '\n';
		return;		
	}
	while (std::getline(_file, StringTemp))
	{
		String += StringTemp;
		String += '\n';
	}
	String.erase(String.size() - 1);
	while (iter < String.length())
	{
		if (String.empty() == false)
		{
			while (iter < String.length())
			{
				if (String.find(_s1, iter) < String.length())
				{
					StringCopy += (String.substr(iter, String.find(_s1, iter)));
					iter += String.find(_s1, iter);
					StringCopy += _s2;
					iter += _s1.length();
				}
				else
				{
					StringCopy += (String.substr(iter, String.length() - iter));
					iter += (String.substr(iter, String.length() - iter)).length();
					break ;
				}
			}
		}
		_myFile << StringCopy;
		StringCopy.clear();
	}
}

std::string Sed::getFileName()
{return (this->_fileName);}


// ecrire un char dans copy. iter sur string
// quand je trouve s1 j;ecros s2 dans copy et j'avance de la len de s1 dans string,