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

void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        swap(arr[i], arr[minIndex]);
    }
}

int main()
{
    int arr[5] = {5, 4, 3, 2, 1};

    cout << "Before Sorting the array is : " << endl;
    printArray(arr, 5);

    selectionSort(arr, 5);

    cout << "After Sorting the array is : " << endl;
    printArray(arr, 5);

    return 0;
}