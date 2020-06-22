// SumSquareDifference.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;
/*
The sum of the squares of the first ten natural numbers is,

12+22+...+102=385
The square of the sum of the first ten natural numbers is,

(1+2+...+10)2=552=3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025−385=2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

*/


long int SumOfSquares()
{
	//Sum of squares of the first n integer
	int n = 100;
	long int result = (n*(n+1)*(2*n+1))/6;
	return result;
}

long int SquareOfSum()
{
	//Sum of the first 100 numbers
	int n = 100;
	long int sum = (n*(n + 1)) / 2;

	return pow(sum, 2.0);
}


int main()
{
    std::cout << SquareOfSum() -SumOfSquares();
}

