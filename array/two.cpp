
#include <iostream>
using namespace std;

int print(int arr[], int size)
{
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        total += arr[i];
    }
    return total;
}

int main()
{
    int arr[10] = {12, 3, 4, 5, 6, 7, 8, 10, 29, 230};

    int value = print(arr, 10);
    cout << "Total: " << value << endl;
    return 0;
}