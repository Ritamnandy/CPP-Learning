//Q28. Write a Program to Split a String into a Number of Sub-Strings.


#include<iostream>
#include<string>
using namespace std;

int main(){
    string str1 = "Wellcome to the class",temp="";
    cout << "String split:- "<<endl;
    for (int i = 0; i < str1.length();i++)
    {
        if(str1[i]!=' ')
        {
            temp += str1[i];
        }else{
            cout << temp << " " << endl;
            temp = "";
        }
    }
    cout << temp << " " << endl;
    return 0;
}