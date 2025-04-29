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
	std::string	line;
	size_t			iter = 0;

	if (_s1.empty() == true)
		return ;
	std::getline(_file, line, '\0');
	while ((iter = line.find(_s1, iter)) != std::string::npos)
	{
		line.erase(iter, _s1.length());
		line.insert(iter, _s2);
		iter += _s2.length();
		std::cout << iter << '\n';
	}
	_myFile << line;
}

std::string Sed::getFileName()
{return (this->_fileName);}
