#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void pair_Sum(int arr[], int target, int size)
{
    sort(arr, arr + size);
    int sum = 0;
    int i = 0, j = size - 1;

    while (i < j)
    {
        sum = arr[i] + arr[j];

        if (sum == target)
        {
            cout << arr[i] << " " << arr[j] << endl;
            i++;
            j--;
        }
        else if (sum < target)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
}

int main()
{
    int arr[6] = {3, 3, 2, 3, 5, 1};
    int target = 6;
    pair_Sum(arr, target, 6);
    return 0;
}