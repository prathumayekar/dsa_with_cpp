#include <iostream>
using namespace std;

int main()
{
    string s = "azxxzy";
    // int i = 0;

    //     while(i < s.length() - 1)
    //     {
    //         if(s[i] == s[i + 1])
    //         {
    //             s.erase(i, 2);
    //             i = 0;
    //         }
    //     }

    cout << s.substr(2, 3);
    return 0;
}