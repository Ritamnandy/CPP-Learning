// Write a Program to Reverse a Sentence Using Recursion.

#include<iostream>
#include<string>

using namespace std;

void reverse(string rev){
    if(rev.size()==0){
        return;
    }else{
        reverse(rev.substr(1));
        cout << rev[0];
    }
}

int main(){
    string rev= "Hello World";
    reverse(rev);
    
    return 0;
}