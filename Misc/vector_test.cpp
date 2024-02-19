#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v(5, 2);

    for(int i : v)
    {
        cout<<i<<" ";
    }

    cout<<endl;
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    v.push_back(9);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    v.push_back(7);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    v.push_back(8);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    v.push_back(99);
    v.push_back(99);
    v.push_back(99);

    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    return 0;
}