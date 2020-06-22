// SmallestMultiple.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

bool CanBeDivided(long int n)
{
	for (int i = 1; i <= 20; i++)
	{
		if (n%i!=0)
		{
			return false;
		}
	}

	return true;
}

int main()
{
	int i = 20;
	while (true)
	{
		if (CanBeDivided(i))
		{
			cout << i << endl;
			break;
		}
		i++;
	}
    std::cout << "Hello World!\n";
}

