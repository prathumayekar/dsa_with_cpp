#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    cout << " printing the array " << endl;
    // print the array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << " printing DONE " << endl;
}

void swapAlternate(int arr[], int size)
{
    int a = 0;
    int b = 1;

    while (a < size && b < size)
    {
        swap(arr[a], arr[b]);
        a = a + 2;
        b = b + 2;
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    int brr[6] = {2, 3, 4, 8, 9, 0};

    cout << "Before swapping..." << endl;
    printArray(arr, 5);

    swapAlternate(arr, 5);

    cout << "After swapping..." << endl;
    printArray(arr, 5);

    cout << "Before swapping..." << endl;
    printArray(brr, 6);

    swapAlternate(brr, 6);

    cout << "After swapping..." << endl;
    printArray(brr, 6);

    return 0;
}