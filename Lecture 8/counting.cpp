#include <iostream>
using namespace std;

// Function Signature
void printCounting(int num)
{
    // Function Body
    for (int i = 1; i <= num; i++)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;

    // function call
    printCounting(n);
    return 0;
}