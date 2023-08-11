#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if(n == 2)
      return 1;

    int a = 0;
    int b = 1;
    int term = 0;

    for (int i = 1; i < n - 1; i++)
    {
        term = a + b;
        a = b;
        b = term;
    }

    return term;
}

int main()
{
    int n;
    cout << "Enter which term of the fibonacci series you want " << endl;
    cin >> n;
    cout << "The " << n << "th term of the fibonacci series is " << fibonacci(n) << endl;
    return 0;
}