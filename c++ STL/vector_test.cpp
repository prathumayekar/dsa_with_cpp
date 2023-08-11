#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(4);
    v.push_back(3);
    v.push_back(0);
    v.push_back(4);

    // cout<<*(v.begin() + 2)<<endl;
    cout<<*(v.begin())<<endl;
    cout<<*(v.end() - 1)<<endl;
    //v.begin() gives us the iterator of beginning meaning a pointer to the first element of
    // the vector

    auto a = 'v';

    cout<<sizeof(a)<<endl;

    int arr[4] = {1,2,3,4};

    for(int i : arr)
    {
        cout<<i<<" ";
    }
    return 0;
}