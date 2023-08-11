#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int row = 1;

    while(row <= n)
    {
        int col = 1;
        int start = row;
        while(col <= row)
        {
            cout<<start;
            start = start + 1;
            col = col + 1;
        }

        cout<<endl;
        row = row + 1;
    }
    return 0;
}