#include <iostream>
#include <fstream>
#include <string>
#include "func.hpp"

int main()
{
    std::ifstream in("input.txt");
	if (!in.is_open())
	{
	    std::cout << "Err";
	    return 0;
	}
	
	std::string s; 
	std::string lasts;
	std::ofstream out("input.txt", std::ios::app);

	while (std::getline(in, s))
	{
	    lasts = s;
	}
	
	std::cout << s << std::endl;
	if (!lasts.empty())
	{
	    int i = s[0]-48;
	    out << '\n' << i + 1 << " " << dateyear() + 1900 << "/" << datemon() + 1 << "/" << dateday() << "/" << datehour() << "/" << datemin() << "/" << datesec();
	}
	else
	{
	    out << 1 << " " << dateyear() + 1900 << "/" << datemon() + 1 << "/" << dateday() << "/" << datehour() << "/" << datemin() << "/" << datesec();
	}
}
