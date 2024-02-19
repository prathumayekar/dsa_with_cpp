#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    // for(int i : d)
    // {
    //     cout<<i<<" ";

    // }

    // d.pop_front();
    // cout<<endl;
    // for(int i : d)
    // {
    //     cout<<i<<" ";

    // }

    cout << "Print First Index Element--> " << d.at(1) << endl;

    cout << "front " << d.front() << endl;
    cout << "back " << d.back() << endl;

    cout << "Empty or not " << d.empty() << endl;

    cout << "before erase " << d.size() << endl;

    d.erase(d.begin(), d.begin() + 1);

    cout << "after erase " << d.size() << endl;

    d.push_back(4);
    d.push_back(5);
    d.push_back(6);

    for (int i : d)
    {
        cout << i << " ";
    }

    cout<<endl;

    deque<int>::iterator it = d.begin();

    cout << *(it) << endl;

    it++;

    cout << *(it) << endl;

    return 0;
}