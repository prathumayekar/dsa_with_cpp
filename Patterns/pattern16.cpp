#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int row = 1;

    while (row <= n)
    {
        
        // 1st triangle print kara
        int col = 1;
        while (col<=n-row+1)
        {
            cout<<col;
            col = col + 1;
        }
        
        
        // 2nd triangle print kara
        col = 1;
        while(col <= (row-1)*2)
        {
            cout<<'*';
            col = col + 1;
        }


        // 3rd triangle print kara
        col = n-row+1;
        while(col >= 1)
        {
            cout<<col;
            col = col - 1;
        }
        cout << endl;
        row = row + 1;
    }

    return 0;
}