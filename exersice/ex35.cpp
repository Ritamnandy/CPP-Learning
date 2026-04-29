// Q33. Write a Program for Decimal to Octal Conversion.

#include<iostream>

using namespace std;

int main(){

    int number = 100, arr[20], k = 0;
    int temp = number;
    while(number!=0){
        int rem = number % 8;
        arr[k] = rem;
        k++;
        number /= 8;
    }
    arr[k] = '\0';
    cout << temp << " octal version is:- ";
    for (int i = k-1; i >= 0;i--){
        cout << arr[i];
    }
    cout << endl;
    return 0;
}