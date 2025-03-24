#ifndef SED_H
# define SED_H

#include <iostream>
#include <iomanip>
#include <cctype>
#include <limits.h>
#include <fstream>
#include <string>

#define RED \033[1;31m
#define GREEN \033[32m
#define WHITE \033[0m

class Sed
{
	private:
		std::string		_fileName;
		std::string		_s1;
		std::string		_s2;
		std::ifstream	_file;
		std::ofstream	_myFile;
	public:
		void	openFile(void);
		void	stringCopy(std::string);
		void	SetInfos(int argc, char** argv);
		void	FillFile(void);
		std::string	getFileName(void);
		Sed(int argc, char **argv);
		~Sed(void);
};

#endif