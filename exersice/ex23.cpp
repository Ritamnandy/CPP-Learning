//Q19. Write a Program to Search an Element in an Array (Linear Search).


#include<iostream>

using namespace std;

int main(){

    int arr[] = {1, 4, 3, 2, 9, 6, 10, 7, 8}, size, flag = 0, key, pos;
    size = sizeof(arr) / sizeof(int);
    key = 10;
    for (int i = 0; i < size;i++)
    {
        if(key==arr[i])
        {
            flag = 1;
            pos = i;
            break;
        }
    }
    if(flag==0)
    {
        cout << key << " not found"<<endl;
    }else{
        cout << key << " found at "<<pos+1<<" position"<<endl;
    }

    return 0;
}