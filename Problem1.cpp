#include "Problem1.h"
#include <iostream>

/*If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.*/

bool isGood(int number)
{
	return number % 3 == 0 || number % 5 == 0;
}

void ten()
{
	int sum = 0;
	for (int i = 1; i < 10;++i)
	{
		if (isGood(i))
			sum += i;
	}
	std::cout << sum << std::endl;
}

void thousand()
{
	int sum = 0;
	for (int i = 1; i < 1000; ++i)
	{
		if (isGood(i))
			sum += i;
	}
	std::cout << sum << std::endl;
}


void problem1()
{
	ten();
	thousand();
	system("pause");
}