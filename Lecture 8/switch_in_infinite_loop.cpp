#include <iostream>
using namespace std;

int main()
{
    int num = 2;

    // To get out of this while loop from inside switch
    while (1)
    {
        switch (num)
        {
        case 2:
            cout << "hi" << endl;
            exit(0); // This function terminates the program here itself and returns 0
        }
    }
    return 0;
}