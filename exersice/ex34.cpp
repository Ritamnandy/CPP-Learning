// Write a Program for Binary to Decimal Conversion.


#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main(){

    string Binary = "1111";
    int size = Binary.length(), Decimal = 0,k=0;
    for (int i = size - 1; i >= 0;i--)
    {
        int temp = Binary[i]-'0';
        Decimal +=temp* (int)pow(2, k);
        k++;
    }
    cout << Decimal<<endl;
    return 0;
}