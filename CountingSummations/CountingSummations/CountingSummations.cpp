// CountingSummations.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#define n 100
/*
It is possible to write five as a sum in exactly six different ways:

4 + 1
3 + 2
3 + 1 + 1
2 + 2 + 1
2 + 1 + 1 + 1
1 + 1 + 1 + 1 + 1

How many different ways can one hundred be written as a sum of at least two positive integers?
*/
#include <vector>
using namespace std;

int countWays()
{
    // table[i] will be storing the number of 
    // solutions for value i. We need n+1 rows 
    // as the table is consturcted in bottom up 
    // manner using the base case (n = 0) 
    int table[n + 1];

    // Initialize all table values as 0 
    memset(table, 0, sizeof(table));

    // Base case (If given value is 0) 
    table[0] = 1;

    //for (int i = 0; i < 1; i++)
    //{
    //    for (int k = 0; k < 4; k++)
    //    {
    //        cout << table[k] << " ";
    //    }
    //    cout << endl;
    //}

    // Pick all integer one by one and update the 
    // table[] values after the index greater 
    // than or equal to n 
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            table[j] += table[j - i];
        }

        //for (int k = 0; k < n; k++)
        //{
        //    cout << table[k] << " ";
        //}
        //cout << endl;
    }


    return table[n];
}



int main()
{
    cout << "Solution: " << countWays();
}
