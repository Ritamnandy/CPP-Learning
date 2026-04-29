// Write a Program to Print Pascal’s Triangle.
    //C(n,r)= n!​/r!(n−r)!
    // 
// Input: 5

// Output:
// 1
// 1 1
// 1 2 1 
// 1 3 3 1
// 1 4 6 4 1

#include<iostream>

using namespace std;

int main(){
    int n = 5;
    for (int i = 1; i <= n;i++)
    {
        for (int j = 1; j <=n-(i+1);j++){
            cout << " ";
        }
        int num = 1;
        for (int k = 1; k <= i;k++)
        {
            cout << num << " ";
            num = num * (i - k) / k;
        }
        cout << endl;
    }
    return 0;
}