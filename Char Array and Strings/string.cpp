#include <iostream>

using namespace std;

int main()
{
    // string str = "hat";

    // string str2 = "love";

    string str3 = "I am a coder";

    // string str4;
    // getline(cin, str4, 'h'); //'h' is a custom delimeter(means execution stop when 'h' is encountered)

    // // copying str2 into str3;
    // str3 = str2;

    // str[1] = '\0';
    // // concatenate two strings
    // str2 = str2 + str;

    // cout << str.capacity() << endl;

    // cout << str.length() << endl;

    // cout << str3<<endl;

    // cout<<str4;
    // cout<<str;

    // str3.insert(7, "good ");
    // cout << str3 << endl;
    // cout<<str3.capacity()<<endl;

    // str3.erase(7, 5);
    // cout << str3<<endl;
    // cout<<str3.capacity()<<endl;

    // str3.replace(7, 5, "gamer");
    // cout<<str3<<endl;

    // cout<<str3.find("gamer")<<endl;


    // cout<<str4<<endl;

    // str3.insert(1, "@40");
    // cout<<str3.length()<<endl;
    // cout<<str3<<endl;

    for(int i = 0; i < str3.length(); i++)
	{
		if(str3[i] == ' ')
		{
			str3.replace(i, 1, "@40");

		}
		
	}
    cout<<str3;
    

    return 0;
}