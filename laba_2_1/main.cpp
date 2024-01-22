#include <iostream>
#include <fstream>
#include "func.hpp"

int main()
{
    std::ofstream out("input.txt", std::ios::app);
	std::cout << dateyear() << std::endl;
	out << " " << dateyear()+1900 << "/" << datemon() + 1 << "/" << dateday() << "/" << datehour() << "/" << datemin() << "/" << datesec();

	return 0;
}
