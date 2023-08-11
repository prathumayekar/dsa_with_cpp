#include <iostream>
#include <algorithm>
using namespace std;

void printArray(int arr[], int size)
{
    cout << "Printing the Array..." << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int arr[5];
    fill_n(arr, 5, 2); //This function fills\initialize the entire array with a specific value
    printArray(arr, 5);
    return 0;
}