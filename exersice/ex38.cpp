// Q37. Write a Program to Sort a String.

#include<iostream>
#include<algorithm>
#include<string>

using namespace std;


int main(){

    string str[5] = {"Abhishek", "Ankur", "Satyam", "Ankit", "Yuvraj"};
    string str1 = "Abhishek";

    sort(str1.begin(), str1.end());
    cout << str1 << endl;
    return 0;
}