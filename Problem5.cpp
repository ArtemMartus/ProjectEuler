#include "Problem5.h"
#include <iostream>
/*2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?*/

int evenlyDiv(int maxN)
{
	int number = 1;
	int divBy = 1;
	while (true)
	{
		if (number%divBy!=0)
		{
			divBy = 1;
			number++;
		}
		else
		{
			if (divBy == maxN)
				return number;
			divBy++;
		}
	}
}

void problem5()
{
	std::cout << evenlyDiv(10) << std::endl;
	std::cout << evenlyDiv(20) << std::endl;
	system("pause");
}