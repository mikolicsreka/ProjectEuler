// 10001stPrime.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?

https://en.wikipedia.org/wiki/Prime_number_theorem
*/
#include <iostream>
#include <math.h> 
#include <vector>
using namespace std;


//Appoximation
long int LowerBound(int n)
{
    //n meanth the nth prime , if n >=6
    long int lowerbound = n * log(n) + n * (log(log(n - 1)));
    return lowerbound;
}

long int UpperBound(int n)
{
    //n meanth the nth prime , if n >=6
    long int upperbound = n * log(n) + n * (log(log(n)));
    return upperbound;
}

// initializing the max value  
#define MAX_SIZE 1000005  

// Function to generate N prime numbers using  
// Sieve of Eratosthenes 
void SieveOfEratosthenes(vector<int>& primes) //out
{
    // Create a boolean array "IsPrime[0..MAX_SIZE]" and  
    // initialize all entries it as true. A value in  
    // IsPrime[i] will finally be false if i is  
    // Not a IsPrime, else true.  
    bool IsPrime[MAX_SIZE];
    memset(IsPrime, true, sizeof(IsPrime));

    for (int p = 2; p * p < MAX_SIZE; p++)
    {
        // If IsPrime[p] is not changed, then it is a prime  
        if (IsPrime[p] == true)
        {
            // Update all multiples of p greater than or   
            // equal to the square of it  
            // numbers which are multiple of p and are  
            // less than p^2 are already been marked.   
            for (int i = p * p; i < MAX_SIZE; i += p)
                IsPrime[i] = false;
        }
    }

    // Store all prime numbers  
    for (int p = 2; p < MAX_SIZE; p++)
        if (IsPrime[p])
            primes.push_back(p);

}

//Slower finding
static bool isPrime(int n) {
    for (int i = 2; i < n; ++i) {
        if (n % i == 0) {
            // We are naive, but not stupid, if
            // the number has a divisor other
            // than 1 or itself, we return immediately.
            return false;
        }
    }
    return true;
}

static int nthPrime(int n) {
    int candidate, count;
    for (candidate = 2, count = 0; count < n; ++candidate) {
        if (isPrime(candidate)) {
            ++count;
        }
    }
    // The candidate has been incremented once after the count reached n
    return candidate - 1;
}


int main()
{
    //int n = 10001;
    //std::cout << LowerBound(10001) << " p " << UpperBound(10001) << endl ;
    vector<int> primes;
    SieveOfEratosthenes(primes);

    cout << primes[10000] << endl; //primes[0] is the first prime...
    cout << nthPrime(10001) << endl;

}
