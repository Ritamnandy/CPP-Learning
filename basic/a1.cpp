
#include<iostream>
using namespace std;

void printarray(int arr[],int size){

     for (int i = 0; i < size;i++)
    {
        cout << "array indexs " << arr[i] << endl;
    }
}
int main(){

    int arr[5] = {12, 3, 16, 43, 10};
    printarray(arr, 5);
    return 0;
}