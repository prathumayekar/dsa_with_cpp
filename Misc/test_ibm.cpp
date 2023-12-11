#include<iostream>
using namespace std;

void fileSplitByDate(string *fillData, int totalTransactions)
{
    // Reading the Transactions from the string array
    int j = 0; // tracking index in string array

    for (int i = 1; i <= totalTransactions; i++)
    {

        if(fillData[j] != "H")
        {
            cout<<"Invalid file"<<endl;
            j = j + 2; // Jumping to next transaction
            continue;
        }
        else
        {
            j++;
        }

        
        string output = fillData[j];
        int k = 0; // to track index in output string
        while(k < output.length())
        {
            if((output[k] >= 'a') && (output[k] <= 'z'))
            {
                output.erase(0, 1);
                k = 0;
            }
            else
            {
                k++;
            }
        }


        if(fillData[++j] != "T")
        {
            cout<<"Invalid file"<<endl;
            continue;
        }

        cout<<output<<endl;
        cout<<"Transaction on "<<output<<" is written as to -> file"<<output<<".txt"<<endl;

    }
    
    
}

int main()
{
    string fillData[3] = {"H", "aaaaaa01/01/2021", "h"};

    fileSplitByDate(fillData, 1);
}