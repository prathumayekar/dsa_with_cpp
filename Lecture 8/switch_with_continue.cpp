#include <iostream>
using namespace std;

int main()
{
    int num = 3;

    for (int i = 0; i <= 5; i++)
    {
        switch (num * 2)
        {
        case 3:
            cout << "this is case 3" << endl;
            continue;

        case 6:
            cout << "this is case 6" << endl;
            continue; // continue in case of switch does the same work as break
            cout << "hi" << endl;

            case 9:
            cout << "this is case 9" << endl;
            continue;
        }
    }
    return 0;
}