#include<iostream>
using namespace std;

string caesarCipher(string text, int key)
{
    for (int i = 0; i < text.length(); i++)
    {
        text[i] += key;
    }

    return text;
}

int main()
{
    string text;
    int key = 0;
    cout<<"Enter the message to be encrypted :"<<endl;
    getline(cin, text);
    cout<<"Enter the key :"<<endl;
    cin>>key;

    cout<<"Your message after encryption :"<<endl;
    cout<<caesarCipher(text, key);

    return 0;
}