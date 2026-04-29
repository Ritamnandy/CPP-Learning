

// Write a Program to Check if a Given Year Is a Leap Year.

#include<iostream>

using namespace std;



int main(){
    int year = 2024;
    bool isleapyear = ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) ? 1 : 0;

    isleapyear ? cout << year << " is a leapyear" << endl : cout << year << " is not a leapyear" << endl;

    return 0;
}