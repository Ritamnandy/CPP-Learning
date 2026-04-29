//Q23. Write a Program to Find the Length of a String.
//Q24. Write a Program to Compare Two Strings.


#include<iostream>
#include<string>

using namespace std;


int main(){
    string str1 = "c", str2 = "b";
    int result = str1.compare(str2);

    if(result==0)
    {
        cout << str2<<" and "<< str1 << " is equal"  << endl;
    }else if(result<0)
    {
        cout << str2 << " is greater then " << str1 << endl;
    }else{
        cout << str1 << " is greater then " << str2 << endl;
    }

    return 0;
}