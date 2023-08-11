#include <iostream>
using namespace std;

int no_of_set_bits(int n)
{
    int count = 0;
    while(n != 0)
    {
        if(n&1 == 1)
        {
            count++;
        }
        n = n>>1;
    }
    return count;
}

int main()
{
    int a, b;
    cout << "enter the value of a " << endl;
    cin >> a;

    cout << "enter the value of b " << endl;
    cin >> b;

    cout << "The total number of set bits in a and b is : " << (no_of_set_bits(a) + no_of_set_bits(b)) << endl;

    return 0;
}