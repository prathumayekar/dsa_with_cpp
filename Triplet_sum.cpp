#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[9] = {1, 2, 3, 6, 9, 3, 5, 2, 1};
    int n = 9;

    int target = 9;
    sort(arr, arr + n);
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         for (int k = j + 1; k < n; k++)
    //         {
    //             if (arr[i] + arr[j] + arr[k] == target)
    //                 cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
    //         }
    //     }
    // }

    for (int i = 0; i < n - 2; i++)
    {
        // Checking if previous element denoted by i is same as current element
        if (i > 0 && arr[i] == arr[i - 1])
        {
            continue;
        }

        // setting up the two pointers
        int left = i + 1;
        int right = n - 1;

        while (left < right)
        {
            int sum = arr[i] + arr[left] + arr[right];
            if (sum == target)
            {
                cout<<arr[i]<<" "<<arr[left]<<" "<<arr[right]<<endl;

                while(left < right && arr[left] == arr[left+1])
                {
                    left++;
                }

                while(left < right && arr[right] == arr[right + 1])
                {
                    right++;
                }

                left++;
                right--;
            }
            else if (sum < target)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
    }

    return 0;
}