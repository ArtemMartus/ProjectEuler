#include "Problem3.h"
#include <iostream>
#include <windows.h>
#include <list>
/*The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?*/

int getPrimeFactor(DWORD numb)
{
	std::list<DWORD> div;
	DWORD divBy = 2;
	while (divBy!=numb)
	{
		if ((numb%divBy) != 0)
			divBy++;
		else{
			numb /= divBy;
			div.push_back(divBy);
		}
	}
	for (auto a = div.begin(); a != div.end();++a)
	{
		std::cout << *a << " ";
	}
	return divBy;
}

void primeFactor(DWORD numb)
{
	std::cout << getPrimeFactor(numb) << std::endl;
}

void problem3()
{
	primeFactor(13195);
	primeFactor(600851475143);
	system("pause");
}