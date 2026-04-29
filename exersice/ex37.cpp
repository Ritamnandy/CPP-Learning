//Q36. Write a Program of Merge Sort.


#include<iostream>

using namespace std;
int arr[] = {10, 8, 7, 6, 9, 3, 2, 4, 5, 1};
void Merge(int left,int mid,int right){
    int i = left, j = mid + 1, k = left, p, c[100];
    while(i<=mid&&j<=right){
        if(arr[i]>=arr[j])
        {
            c[k] = arr[j];
            k++;
            j++;
        }else{
            c[k] = arr[i];
            k++;
            i++;
        }
    }
    if(i<=mid&&j>right){
        for (p = i; p <= mid;p++){
            c[k] = arr[p];
            k++;
        }
    }
    if(i>mid&&j<=right){
        for (p = j; p <= right;p++){
            c[k] = arr[p];
            k++;
        }
    }
    for (p = left; p <= right;p++)
    {
        arr[p] = c[p];
    }
}

void Divide(int left,int right){
    if(left<right){
        int mid = (left + right) / 2;
        Divide(left, mid);
        Divide(mid+1, right);
        Merge(left, mid, right);
    }
}


int main(){

    Divide(0, 10-1);
    cout << "\nArray after sorting:- ";
    for (int i = 0; i < 10;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}