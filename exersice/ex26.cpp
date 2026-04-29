//Q25. Write a Program to Check if the String Is Palindrome.

#include<iostream>
#include<string>


using namespace std;

int main(){
    string str1 = "aaaaa", str2;

    str2 = string(str1.rbegin(),str1.rend());
    
    if(str1==str2)
    {
        cout << "palindrome";
    }else{
        cout << "not palindrome";

    }
    return 0;
}