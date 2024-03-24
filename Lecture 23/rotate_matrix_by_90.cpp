#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

// void rotateBy90(int arr[][3], int temp[][3], int row, int col)
// {
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             temp[j][col - 1 - i] = arr[i][j];
//         }
//     }
// }

void rotateBy90(int arr[][3], int row, int col)
{
    for (int rowIndex = 0; rowIndex < row - 1; rowIndex++)
    {
        for (int colIndex = rowIndex; colIndex < col; colIndex++)
        {
            swap(arr[rowIndex][colIndex], arr[colIndex][rowIndex]);
            cout << rowIndex << " " << colIndex << endl;
        }
    }

    for(int colIndex = 0; colIndex < col - 1; colIndex++)
    {
        for (int rowIndex = 0; rowIndex < row; rowIndex++)
        {
            swap(arr[rowIndex][colIndex], arr[rowIndex][col - 1 - colIndex]);
        }
        
    }    
    
}

int main()
{
    int arr[3][3];
    int temp[3][3];
    vector<vector<int>> matrix(3, vector<int>(3));

    // cout << "Enter the elements " << endl;
    // // // taking input --> row wise input
    // for (int row = 0; row < 3; row++)
    // {
    //     for (int col = 0; col < 3; col++)
    //     {
    //         cin >> arr[row][col];
    //     }
    // }

    // cout << "Printing the arr 2d array" << endl;
    // // print
    // for (int row = 0; row < 3; row++)
    // {
    //     for (int col = 0; col < 3; col++)
    //     {
    //         cout << arr[row][col] << " ";
    //     }
    //     cout << endl;
    // }

    // rotateBy90(arr, 3, 3);

    // // transPose(arr, 3, 3);

    // cout << "Printing the arr array" << endl;
    // // print
    // for (int row = 0; row < 3; row++)
    // {
    //     for (int col = 0; col < 3; col++)
    //     {
    //         cout << arr[row][col] << " ";
    //     }
    //     cout << endl;
    // }

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin >> matrix[row][col];
        }
    }

    reverse(matrix.begin(), matrix.end());

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << matrix[row][col] << " ";
        }
        cout << endl;
    }

    return 0;
}