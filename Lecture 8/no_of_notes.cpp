#include<iostream>
using namespace std;

int main()
{
    int amount;
    cout<<"Enter the total amount : ";
    cin>>amount;
    int x;
    int num = 1;

    switch(num)
    {
        case 1: x = amount / 100;
                cout<<"Number of 100rs notes is "<<x<<endl;
                amount = amount - (x * 100);

        case 2: x = amount / 50;
                cout<<"Number of 50rs notes is "<<x<<endl;
                amount = amount - (x * 50);

        case 3: x = amount / 20;
                cout<<"Number of 20rs notes is "<<x<<endl;
                amount = amount - (x * 20);

        case 4: x = amount / 1;
                cout<<"Number of 1rs notes is "<<x<<endl;
                amount = amount - (x * 1);
    }
    
    return 0;
}