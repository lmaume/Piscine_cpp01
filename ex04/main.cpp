#include "sed.hpp"

/*
	if (test == sosis)
		you_won();
	else
		sad_noise.png
*/

int main(int argc, char **argv)
{
	Sed sed;
	
	sed.SetInfos(argc, argv);
	sed.openFile();
	sed.FillFile();
}
