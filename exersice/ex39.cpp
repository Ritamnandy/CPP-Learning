// Q34. Write a Program to Sort an Array (Bubble Sort).


#include<iostream>

using namespace std;

int main(){

    int arr[] = {3, 8, 9, 5, 6, 10, 1, 2, 4, 7};
    int size = sizeof(arr) / sizeof(int);
    for (int i = 0; i < size;i++){
        for (int j = 0; j < size-i;j++){
            if(arr[j]>=arr[j+1])
            {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
                
            }
        }
        cout << "\nafter "<<i<<" progress:- ";
        for (int k = 0; k < size;k++){
            cout << arr[k] << " ";
        }
    }
    cout << "\nArray after sorting:- ";
    for (int i = 0; i < size;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}