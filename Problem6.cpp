#include "Problem6.h"
#include <iostream>
/*The sum of the squares of the first ten natural numbers is,

12 + 22 + ... + 102 = 385
The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)2 = 552 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 ? 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.*/

int squareEach_first(int maxN)
{
	int sum = 0;
	for (int i = 1; i <= maxN; ++i)
		sum += i*i;
	return sum;
}

int sqareAll_first(int maxN)
{
	int sum = 0;
	for (int i = 1; i <= maxN; ++i)
		sum += i;
	return sum*sum;
}

int Hence(int maxN)
{
	return sqareAll_first(maxN) - squareEach_first(maxN);
}

void problem6()
{
	std::cout << Hence(10) << std::endl;
	std::cout << Hence(100) << std::endl;
	system("pause");
}