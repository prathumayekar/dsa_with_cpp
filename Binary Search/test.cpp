#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sort01(int arr[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        while (arr[s] == 0 && s < e)
        {
            s++;
        }

        while (arr[e] == 1 && s < e)
        {
            e--;
        }

        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

int main()
{

    int arr[6] = {1, 0, 0, 1, 1, 0};

    printArray(arr, 6);

    sort01(arr, 6);

    printArray(arr, 6);

    return 0;
}