#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    // functions on char arrays
    // In c++ char arrays are also called C-Strings

    char name[20];
    char sub[20] = "hello";
    cin >> name;

    cout << name << endl;

    cout<<"Length of name is :"<<strlen(name)<<endl;

    cout<<"are the strings equal ?"<<strcmp(name, sub)<<endl;

    strcpy(name, sub);

    cout << name << endl;
    cout << sub << endl;

    cout<<"are the strings equal ?"<<strcmp(name, sub)<<endl;

    return 0;
}