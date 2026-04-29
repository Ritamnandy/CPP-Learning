//Write a Program to Swap Two Numbers.

#include <iostream>
using namespace std;


int main()
{
    int a = 230;
    int b = 105;
    a = a - b;
    b = a + b;
    a = b - a;
    cout << a << endl;
    cout << b << endl;

    return 0;
}