#include <iostream>
#include <algorithm>

using namespace std;

void reverse_word(string str, int start, int end)
{
    int s = start;
    int e = end;

    while (s <= e)
    {
        swap(str[s++], str[e--]);
    }
}

string reverseWords(string s)
{

    int j = 0;

    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] == ' ')
        {
            reverse(s.begin() + j, s.begin() + i);
            j = i + 1;
        }
       
        
    }

    reverse(s.begin() + j, s.end());

    return s;
}

int main()
{
    string str = "";
    getline(cin, str);
    cout << reverseWords(str);

    return 0;
}