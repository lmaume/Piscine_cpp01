#include <iostream>
#include <iomanip>

int main()
{
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "string    Adress :" << &string << std::endl;
	std::cout << "strintPTR Adress :" << &stringPTR << std::endl;
	std::cout << "stringREF Adress :" << &stringREF << std::endl;

	std::cout << "\n";

	std::cout << "string    Value  :" << string << std::endl;
	std::cout << "strintPTR Value  :" << stringPTR << std::endl;
	std::cout << "stringREF Value  :" << stringREF << std::endl;
	return (0);
}
