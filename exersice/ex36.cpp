//Q35. Write a Program to Search an Element in an Array (Binary Search).

#include<iostream>

using namespace std;


void Binary_Search(int arr[],int left,int right,int key){

    int mid,flag=0;
    while(left<right&&flag==0){
        mid=(left + right) / 2;
        if(arr[mid]==key){
            flag = 1;
        }else if(arr[mid]>key)
        {
            right = mid - 1;
        }else{
            
            left = mid + 1;
        }
    }

    if(flag==0){
        cout << key << " not found" << endl;
    }else{
        cout << key << " found at " << mid + 1 << " postion" << endl;
    }
}




int main(){

    int arr[] = {2, 3, 4, 5, 6, 8, 9, 10, 12, 16, 20, 21};
    int size = sizeof(arr) / sizeof(int);
    Binary_Search(arr, 0, size, 10);
    return 0;
}