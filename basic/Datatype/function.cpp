
#include <iostream>
using namespace std;

void printNum(int n)
{
    n = 1000;
    
    cout << n << endl;
}

void printNum2(int *a)
{
    
    *a +=20;
    cout << *a << endl;
}

int main()
{
    cout << boolalpha;
    // int a = 20;
    // printNum(a);
    // cout << "After call by value: " << a << endl;
    // printNum2(&a);
    // cout << "After call by refarance: " << a << endl;
    
    // int a = 20, *b, **c;
    // b = &a;
    // c = &b;

    // cout << a << endl;
    // cout << &a << endl;
    // cout << b << endl;
    // cout << &b << endl;
    // cout << *b << endl;
    // cout << c << endl;
    // cout << &c << endl;
    // cout << *c << endl;
    // cout << **c << endl;

    bool isTrue = true;

    cout << isTrue;

    return 0;
}