// MultipliesOf3And5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

/*
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*/

bool IsMultiplyOf3Or5(int number)
{
	if (number % 3 == 0)
	{
		return true;
	}
	else if (number % 5 == 0)
	{
		return true;
	}

	return false;
}


vector<int> NumbersBelowX(int Max)
{
	vector<int> result;

	for (int i = 1; i < Max; i++)
	{
		if (IsMultiplyOf3Or5(i))
		{
			result.push_back(i);
			//cout << "number: " << i << endl;
		}
	}

	return result;
}


int SumOfNumbers(vector<int> &numbers)
{
	int result = 0;

	for (int i = 0; i < numbers.size(); i++)
	{
		result += numbers[i];
	}

	return result;
}


int main()
{
	vector<int> numbers = NumbersBelowX(1000);
	int result = SumOfNumbers(numbers);
	cout <<  "The sum: " << result << endl;
}

