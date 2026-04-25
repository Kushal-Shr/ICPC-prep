#include <iostream>

using namespace std;

int primeCount(int n)
{
    vector<bool> isPrime(n + 1, true);

    for (int i = 2; i < n; i++)
    {
        if (isPrime[i] == true)
        {
            for (int j = i * 2; j < n; j += i)
                isPrime[j] = false;
        }
    }

    int count = 0;

    for (int i = 2; i < n; i++)
    {
        if (isPrime[i])
            count++;
    }

    return count;
}

int main()
{
    int n = 50;

    int numOfPrime = primeCount(n);

    cout << numOfPrime << endl;

    return 0;
}