// LargestPalindromeProduct.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;
/*
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

int ReversedNumber(int n)
{
    int  reversedNumber = 0, remainder;

    while (n != 0)
    {
        remainder = n % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        n /= 10;
    }

    return reversedNumber;
}


int main()
{
    vector<int> palindromes;
    //Find Palindromes
    for (int i = 999; i > 0; i--)
    {
        for (int j = 999; j > 0; j--)
        {
            int product = i * j;
            if (product == ReversedNumber(product))
            {
                //cout << "i: " << i << " j: " << j << " product " << product << endl;
                palindromes.push_back(product);
            }
        }
    }
    //Find Max
    int max = 0;
    for (int i = 0; i < palindromes.size(); i++)
    {
        if (palindromes[i] > max)
        {
            max = palindromes[i];
        }
    }
    
    cout << "Max: " << max << endl;
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
