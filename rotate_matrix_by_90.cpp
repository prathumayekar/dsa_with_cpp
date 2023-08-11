#include<iostream>
using namespace std;

void rotateBy90(int arr[][3], int temp[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            temp[j][col - 1 - i] = arr[i][j];
        }
        
    }
    
}

int main()
{
    int arr[3][3];
    int temp[3][3];

    cout << "Enter the elements " << endl;
    // // taking input --> row wise input
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin >> arr[row][col];
        }
    }

    cout << "Printing the arr 2d array" << endl;
    // print
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    rotateBy90(arr, temp, 3, 3);

    cout << "Printing the temp array" << endl;
    // print
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << temp[row][col] << " ";
        }
        cout << endl;
    }

    return 0;
}