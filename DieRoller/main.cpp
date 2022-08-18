#include<iostream>
#include "DieRoller.h"

//create a global dieroller object 
//CONSTRUCTOR GETS CALLED HERE
DieRoller droller;

void main()
{
	//print 5 random numbers between 1-100
	for (int i = 0; i < 5; ++i)
	{
		std::cout << droller.RollDN(100) << "  ";
	}

	std::cout << "\n";

	//print 5 random stat rolls between 3-18
	for (int i = 0; i < 5; ++i)
	{
		std::cout << droller.Roll4D6DropLowest() << "  ";
	}

	std::cout << "\n";

	//seed the rng with a KNOWN seed
	droller.SeedRNG(42);

	//the following rolls should always roll the same sequence of numbers
	//on subsequent runs of the program
	for (int i = 0; i < 5; ++i)
	{
		std::cout << droller.RollDN(100) << "  ";
	}

	std::cout << "\n";

	for (int i = 0; i < 5; ++i)
	{
		std::cout << droller.Roll4D6DropLowest() << "  ";
	}

	std::cout << "\n";

	system("pause");
}