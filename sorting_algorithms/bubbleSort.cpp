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

void bubbleSort(int arr[], int size)
{
    bool isSwapped = 0;
    for (int i = 1; i < size; i++)
    {
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSwapped = 1;
            }
        }

        if (isSwapped == 0)
        {
            break;
        }
    }
}

int main()
{
    int arr[5] = {5, 4, 3, 2, 1};

    cout << "Before Sorting the array is : " << endl;
    printArray(arr, 5);

    bubbleSort(arr, 5);

    cout << "After Sorting the array is : " << endl;
    printArray(arr, 5);

    return 0;
}