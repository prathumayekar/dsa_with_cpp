#include <iostream>
using namespace std;

// 1 -> Prime no.
// 0 -> Not a Prime no.
bool isPrime(int n)
{
    if (n <= 1)
    {
        return 0;
    }

    for (int i = 2; i < n; i++)
    { 
        // divide hogya h , not a prime no.
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int n;
    cin >> n;

    if (isPrime(n))
    {
        cout << " It is a prime no." << endl;
    }
    else
    {
        cout << " Not a prime no." << endl;
    }

    return 0;
}