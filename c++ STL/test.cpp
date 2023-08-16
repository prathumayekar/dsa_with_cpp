#include <iostream>
#include <list>
#include <deque>
using namespace std;

int main()
{
    // list<int> l(5, 2);

    // for (auto i : l)
    // {
    //     cout << i << " ";
    // }
    // cout<<endl;

    // cout<<*(l.begin());

    deque<int> q(5, 2);

    for (auto i : q)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << *(q.begin());
    cout << *(q.end() - 1);

    return 0;
}