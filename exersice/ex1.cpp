#include<iostream>

using namespace std;


int main()
{
    int *arr,n;
    cout << "Enter the size of an array:- ";
    cin >> n;
    arr = new int[n];
    cout << "Enter elements" << endl;
    for (int i = 0; i < n;i++)
    {
        cout << "Enter elements:- ";
        cin >> arr[i];
    }
    int max = 0, max2 = 0, max3 = 0;
    for (int i = 0; i < n;i++)
    {
        if(max<arr[i])
        {
            max = arr[i];
        }
    }
    for (int i = 0; i < n;i++)
    {
        if(max==arr[i])
        {
            continue;
        }if(max2<arr[i]){
            max2 = arr[i];
        }
    }
     for (int i = 0; i < n;i++)
    {
        if(max==arr[i]||max2==arr[i])
        {
            continue;
        }if(max3<arr[i]){
            max3 = arr[i];
        }
    }
    cout << "Third largest number:- " << max3 << endl;
    delete[] arr;
    return 0;
}