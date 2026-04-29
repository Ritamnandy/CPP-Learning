
#include<iostream>

using namespace std;

int main(){
    int *arr, n, i, j, max, max2,max3;
    cout << "Enter the size of an array:- ";
    cin >> n;
    arr = new int[n];
    cout << "\nEnter the element" << endl;
    for (i = 0; i < n;i++)
    {
        cout << "Enter " << i + 1 << " element:- ";
        cin >> arr[i];
    }
    max = 0;
    for ( i = 0; i <n; i++)
    {
        if(max<arr[i])
        {
            max = arr[i];
        }
    }
    max2 = 0;
    for ( i = 0; i <n; i++)
    {
        if(max==arr[i])
        {
            continue;
        }else if(max2<arr[i])
        {
            max2 = arr[i];
        }
    }
    max3 = 0;
    for ( i = 0; i <n; i++)
    {
        if(max==arr[i]||max2==arr[i])
        {
            continue;
        }else if(max3<arr[i])
        {
            max3 = arr[i];
        }
    }
    cout << "\nFirst highest number " << max << endl;
    cout << "\nSecond highest number " << max2 << endl;
    cout << "\nThird highest number " << max3 << endl;
    delete[] arr;
    return 0;
}