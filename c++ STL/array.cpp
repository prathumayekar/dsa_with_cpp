#include <iostream>
#include <array>

using namespace std;

int main()
{
    // normal array
    int basic[3] = {1, 2, 3};

    basic[4] = 5;

    // STL array
    array<int, 4> a = {1, 2, 3, 4};

    // to find size of array
    int size = a.size();

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }

    cout << "Element at 2nd Index--> " << a.at(2) << endl;

    cout << "Empty or not --> " << a.empty() << endl;

    cout << "First Element --> " << a.front() << endl;

    cout << "last Element --> " << a.back() << endl;

    return 0;
}