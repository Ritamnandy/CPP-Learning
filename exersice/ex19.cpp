// Q15. Write a Program to Swap Two Numbers Using a Function.

#include<iostream>

using namespace std;


void Swap(int &a,int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}

int main(){
    int a = 200, b = 155;
    cout << "before swaping a:- " << a << endl;
    cout << "before swaping b:- " << b << endl;
    Swap(a, b);
    cout << "\nafter swaping a:- " << a << endl;
    cout << "after swaping b:- " << b << endl;
    

    return 0;
}