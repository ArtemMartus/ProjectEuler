#include "Problem4.h"
#include <iostream>
#include <string>

/*A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 ? 99.

Find the largest palindrome made from the product of two 3-digit numbers.*/

bool isPalindrome(int number)
{
	std::string str = std::to_string(number);
	std::reverse(str.begin(), str.end());
	return (strcmp(str.c_str(), std::to_string(number).c_str()) == 0);
}

void getPalindrome(int digits)
{
	int largest_a = 1;
	int largest_b = 1;

	const int maximum = std::pow(10, digits);

	int largest_val = 1;

	for (int a = maximum - 1; a > 0; --a)
	{
		for (int b = maximum - 1; b > 0; --b)
		{
			int val = a*b;
			if (largest_val < val && isPalindrome(val))
			{
				//std::cout << "found palindrome " << a*b << "=" << a << "x" << b << std::endl;
				largest_a = a;
				largest_b = b;
				largest_val = val;
			}
			else
				break;
		}
	}
	std::cout << "Largest palindrome " << largest_a*largest_b << " made from " << largest_a << "x" << largest_b << std::endl;
}

void problem4()
{
	getPalindrome(2);
	getPalindrome(3);
	system("pause");
}