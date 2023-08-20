#include <iostream>
using namespace std;

int main()
{

    // char name[20];
    // cin >> name;
    // cout << name << endl;
    // name[2] = '\0';
    // cout << name << endl;

    //     cout<<"string class"<<endl;
    //     string str = "prathamesh";
    //     // cout << str << endl;
    //     str[2] = '\0';
    //     // cout << str << endl;

    //    cout<<str[2];

    string str;
    cout << str.capacity() << endl;
    cout << str.length() << endl;
    cout << str.size() << endl;

    str = "prathamesh";
    cout << str.capacity() << endl;
    cout << str.length() << endl;
    cout << str.size() << endl;
    return 0;
}