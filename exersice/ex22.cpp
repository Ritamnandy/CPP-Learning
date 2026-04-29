// Q18. Write a Program to Find the Maximum and Minimum in an Array.

#include<iostream>

using namespace std;

int main(){
    int arr[] = {51, 23, 31, 49, 85, 16, 67, 28, 90, 100,212};
    int size = sizeof(arr) / sizeof(int);
    int min, max = 0;
    min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if(max<arr[i])
        {
            max = arr[i];
        }
        if(min>arr[i])
        {
            min = arr[i];
        }
    }
    cout << "the Maximum number in an array :- " << max << endl;
    cout << "the Minimum number in an array :- " << min << endl;

    return 0;
}