#include <iostream>
using namespace std;

int nthTerm(int n)
{
    int term = 3 * n + 7;
    return term;
}

int main()
{
    int n;
    cout << "Enter which term of AP you want : ";
    cin >> n;
    cout << "The " << n << "th term of the AP is : " << nthTerm(n) << endl;
    return 0;
}