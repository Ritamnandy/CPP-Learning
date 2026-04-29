//Q17. Write a Program to Calculate the Average of All the Elements Present in an Array.


#include<iostream>

using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,12};
    int size = sizeof(arr) / sizeof(int);
    float avg;
    
    int total=0;

    for (int i = 0; i < size; i++)
    {
        total += arr[i];
    }
    avg = total /size;
    cout << "average of array is :- " << avg << endl;

    return 0;
}