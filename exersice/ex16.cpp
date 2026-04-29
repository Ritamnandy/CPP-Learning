//Write a Program to Make a Simple Calculator.

#include<iostream>

using namespace std;


int main(){
    char op;
    int a, b, sum = 0;
    cout << "Enter two numbers:- ";
    cin >> a >> b;
    cout << "Enter oparetor for calculation(/,+,-,*):- ";
    cin >> op;
    switch (op)
    {
    case '+' :
        cout << a + b << endl;
        break;
    case '-' :
        cout << a - b << endl;
        break;
    case '/' :
        cout << a / b << endl;
        break;
    case '*' :
        cout << a * b << endl;
        break;        
    default:
        cout << "oparetor wrong" << endl;
        break;
    }
    return 0;
}