#include "pch.h"
#include <iostream>

int main()
{
	int ProblemNum;
	
    std::cout << "Which Problem?\n";
	std::cin >> ProblemNum;

	switch (ProblemNum)
	{
		default:
			std::cout << "You chose nothing!" << std::endl;
			break;
	}

	return 0;
}