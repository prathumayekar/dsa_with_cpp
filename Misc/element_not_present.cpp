#include<iostream>
using namespace std;

int isNotPresent(int arr1[], int arr2[], int n, int m)
{

    for (int i = 0; i < n; i++)
    {
        bool isPresent = 0;
        int element = arr1[i];

        for (int j = 0; j < m; j++)
        {
            if(element == arr2[j])
            {
                isPresent = 1;
            }
        }

        if(!isPresent)
        {
            return element;
        }
        
    }
    return INT_MIN;
    
}

int main()
{
    int arr1[5] = {1,3,6,7,12};
    int arr2[8] = {1, 3, 6, 7, 9, 3, 7, 1};

    int element = isNotPresent(arr1, arr2, 5, 8);
    cout<<element<<endl;


    return 0;
}