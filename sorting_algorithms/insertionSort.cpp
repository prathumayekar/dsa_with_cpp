#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertionSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int value = arr[i];
        int j = i - 1;

        for (; j >= 0; j--)
        {
            if (arr[j] > value)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }

        arr[j + 1] = value;
    }
}

int main()
{
    int arr[5] = {5, 4, 3, 2, 1};

    cout << "Before Sorting the array is : " << endl;
    printArray(arr, 5);

    insertionSort(arr, 5);

    cout << "After Sorting the array is : " << endl;
    printArray(arr, 5);

    return 0;
}