#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int ans = 0;
    int i = 0;

    // ignore the negative sign
    n = -(n);

    // convert into binary
    while (n != 0)
    {
        int bit = n & 1;
        ans = (bit * pow(10, i)) + ans;
        n = n >> 1;
        i++;
    }

    cout << ans << endl;

    // take 2's complement
    // 2's complement = 1's complement + 1

}
