// Q20. Write a Program to Print the Array After It Is Right Rotated K Times.

#include<iostream>
#include<vector>

using namespace std;
void Rotated(vector<int> &arr,int k)
{
    if(k<=0)
    {
        return;
    }
    int n = arr.size();
    if(n==0)
    {
        return;
    }
    int temp = arr[n - 1];
    for (int i = n - 1; i >= 0;i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
    Rotated(arr, k - 1);
}

int main(){

    int  k, size;
    vector<int> arr = {1, 2, 3, 4, 5};

    k = 3;
    Rotated(arr, k);
    cout << "after " << k << " time rotatetion:- ";
    for (int i : arr)
    {
        cout << i << " ";
    }
    return 0;
}