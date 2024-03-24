#include <iostream>
using namespace std;

// Bad practice
int &func(int a)
{
    int num = a;
    int &ans = num;
    return ans;
}

// Bad practice
int *fun(int n)
{
    int *ptr = &n;
    return ptr;
}

void update2(int &n)
{
    n++;
}

void update1(int n)
{
    n++;
}

int main()
{
    // int i = 5;

    // // create a reference variable - same memory different names.

    // int &j = i;

    // cout << i << endl;
    // i++;
    // cout << i << endl;
    // j++;
    // cout << i << endl;
    // cout << j << endl;

    int n = 5;

    // cout << "Before " << n << endl;
    // update2(n);
    // cout << "After " << n << endl;

    func(n);
    fun(n);

    return 0;
}