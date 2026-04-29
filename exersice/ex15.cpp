// Write a Program to Check Whether a Number Is a Palindrome or Not.

#include<iostream>

using namespace std;

int main(){
    int n = 1211, rev = 0,t = 12121;

    while(t!=0)
    {
        int x = t % 10;
        rev = (rev * 10) + x;
        t /= 10;
    }
    if(n==rev)
    {
        cout << n << " is a palindrome" << endl;
    }else{
        cout << n << " is not a palindrome" << endl;

    }
    return 0;
}