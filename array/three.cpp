

#include <iostream>
using namespace std;

int *prepareArray(int size)
{
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = (i + 1) * 100;
    }
    return arr;
}

int main()
{
    int *arr;

    arr = prepareArray(10);
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }

    // int value = print(arr, 10);
    // cout << "Total: " << value << endl;
    return 0;
}