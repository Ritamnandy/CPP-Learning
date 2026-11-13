
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {0, 1, 0, 3, 12};
    int len = sizeof(arr) / sizeof(int);
    int pos = 0;
    for (int i = 1; i < len; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[pos], arr[i]);
            pos++;
        }
    }
    cout << "After remove zero: ";
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}