#include "Problem7.h"
#include <iostream>
#include <windows.h>

/*By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?*/

bool isPrime(int n)
{
	for (int i = n - 1; i > 1; --i)
		if (n%i == 0)
			return false;
	return true;
}

void getPrime(int n)
{
	int current = 0;
	DWORD lastPrime = 1;
	while (current!=n)
	{
		lastPrime++;
		if (isPrime(lastPrime))
			current++;
	}
	std::cout << lastPrime << std::endl;
}

void problem7()
{
	getPrime(6);
	getPrime(10001);
	system("pause");
}