//Write a Program to Find the Size of int, float, double, and char.

#include <iostream>
#include<vector>
using namespace std;


int main()
{
    
    cout<<"Size of  int " << sizeof(short) << endl;
    cout<<"Size of short int " << sizeof(int) << endl;
    cout<<"Size of char " << sizeof(char) << endl;
    cout<<"Size of float " << sizeof(float) << endl;
    cout<<"Size of double " << sizeof(double) << endl;
    cout<<"Size of bool " << sizeof(bool) << endl;
    cout<<"Size of string " << sizeof(string) << endl;
    cout<<"Size of vector int " << sizeof(vector<int>) << endl;
    cout<<"Size of vector string " << sizeof(vector<string>) << endl;
    cout<<"Size of vector bool " << sizeof(vector<bool>) << endl;
    cout<<"Size of vector char " << sizeof(vector<char>) << endl;
    cout<<"Size of vector double " << sizeof(vector<double>) << endl;

    return 0;
}