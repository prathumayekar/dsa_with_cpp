#include<iostream>
#include<list>

using namespace std;
int main()
{
    list<int> l;

    list<int> n(5,100);

    
    for(int i : n)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    l.push_back(1);
    l.push_front(2);
    l.push_front(3);

    for(int i : l)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    l.erase(l.begin());
    cout<<"after erase"<<endl;

    list<int>:: iterator itr = l.begin();
    itr++;

    while(itr != l.end())
    {
        cout<<*(itr)<<" ";
        itr++;
    }
    cout<<endl;
    

    for(int i : l)
    {
        cout<<i<<" ";
    }

    
    cout<<"Size of list "<<l.size()<<endl;
    return 0;
}