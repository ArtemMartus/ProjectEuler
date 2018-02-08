#include "Problem9.h"
#include <iostream>
/*
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a2 + b2 = c2
For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/
static int c1=0;
static int c2 = 0;
static int c3 = 0;

bool check_1(int a, int b, int c)
{
	c1++;
	return a < b && b < c;
}

bool check_2(int a, int b, int c)
{
	c2++;
	return (a*a + b*b) == (c*c);
}

bool check_3(int a, int b, int c,int sum)
{
	c3++;
	return (a + b + c) == sum;
}

void ProductOfTriplet(int sum)
{
	int A =0, B =0, C =0;
	for (int a = 0; a < sum;++a)
		for (int b = 0; b < sum;++b)
			for (int c = 0; c < sum; ++c)
				if (check_1(a, b, c) && check_2(a, b, c) && check_3(a, b, c, sum))
				{
		A = a; B = b; C = c;
				}

	std::cout << A*B*C << std::endl;
	std::cout << c1 + c2 + c3 << " checks made!" << std::endl;
}

void problem9()
{
	ProductOfTriplet(1000);
	system("pause");
}