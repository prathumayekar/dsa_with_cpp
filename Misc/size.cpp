#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a = 3;
    long int b = 5;
    long long int c = 8;
    float num = 1.123456789123456;
    double num1 = 1.123456789123456;

    auto p = 9;

    cout << sizeof(a) << endl;
    cout << sizeof(b) << endl;
    cout << sizeof(c) << endl;
    cout << sizeof(num) << endl;
    cout << sizeof(num1) << endl;
    cout << sizeof(p) << endl;

    cout << setprecision(15) << num << endl;
    cout << setprecision(15) << num1 << endl;

    int var = 10;
    int var2 = 4;

    float f = float(var) / var2; //Explicit Typecasting
    cout<<f<<endl;

    return 0;
}