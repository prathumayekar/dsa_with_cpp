#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter the number of rows : ";
    cin >> rows;

    int **arr = new int *[rows];

    for (int i = 0; i < rows; i++)
    {
        int elements;
        cout << "Enter the number of elements in " << i << " st row : ";
        cin >> elements;

        arr[i] = new int[elements];
    }

    arr[0][1] = 9;
    arr[1][3] = 2;
    arr[2][0] = 7;

    cout<<arr[0][1]<<endl;
    cout<<arr[1][3]<<endl;
    cout<<arr[2][0]<<endl;

    return 0;
}