#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
            cout<<"pratham"<<endl;
        }
        else
        {
            end = mid - 1;
            cout<<"pratham"<<endl;
        }

        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int index = binarySearch(arr, 8, 0);
    cout << index << endl;
    return 0;
}