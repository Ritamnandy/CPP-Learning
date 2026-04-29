//Write a Program to Find Compound Interest

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int Principle = 25000;
    float Rate = (12 / 100);
    int Time = 5;
    float total;
    total = Principle * (pow((1+Rate), Time));

    cout << "total compound interest " << total-Principle<<endl;
    return 0;
}