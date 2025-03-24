#include "sed.hpp"

Sed::Sed(int argc, char **argv)
{
	this->SetInfos(argc, argv);
	this->openFile();
	this->FillFile();
}
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
	std::string	StringCopy;

	if (_s1 == _s2)
		while (std::getline(_file, String))
			_myFile << String << '\n';
	while (std::getline(_file, String))
	{
		while (String.find(_s1.c_str(), 0) <= String.length())
		{
			String.insert(String.find(_s1.c_str(), 0), _s2.c_str());
			String.erase(String.find(_s1.c_str(), 0), _s1.length());
		}
		_myFile << String << "\n";
	}
}

std::string Sed::getFileName()
{return (this->_fileName);}
