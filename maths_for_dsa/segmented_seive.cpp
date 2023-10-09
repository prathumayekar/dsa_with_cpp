#include <iostream>
#include <vector>
using namespace std;

// The segmented Sieve solves the problem of creating an array of size(n + 1)
// where n > 10^8 in simple sieve of Eratosthenes

// simple seive to find primes <= sqrt(n)
vector<int> simpleSieve(int n)
{
    vector<int> primes;
    vector<bool> ss(n + 1, true);
    ss[0] = ss[1] = false;

    for (int i = 2; i <= n; i++)
    {
        if (ss[i] == true)
        {
            primes.push_back(i);

            for (int j = 2 * i; j <= n; j = j + i)
            {
                ss[j] = false;
            }
        }
    }

    return primes;
}

// segmented Seive to find primes in a given range [low, high]
void segmentedSieve(int low, int high)
{
    vector<bool> dummy(high - low + 1, true);

    vector<int> primes(simpleSieve(high));

    for (int pr : primes)
    {
        int firstMultiple = (low / pr) * pr;
        if (firstMultiple < low)
        {
            firstMultiple += pr;
        }

        for (int j = max(firstMultiple, pr * pr); j <= high; j = j + pr)
        {
            dummy[j - low] = 0;
        }  
    }

    for (int i = low; i <= high; i++)
    {
        if (dummy[i - low] == 1)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main()
{
    int low;
    int high;

    cout << "Enter the range " << endl;
    cin >> low >> high;

    cout << "The prime numbers in this range are: " << endl;
    segmentedSieve(low, high);

    return 0;
}