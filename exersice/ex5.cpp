// calculate the average of a set of N numbers.

#include<iostream>

using namespace std;

int main()
{

    int *arr = new int[5]{1, 2, 3, 4, 5};

    int total=0;

    for (int i = 0; i < 5;i++)
    {
        total += arr[i];
    }
    double avg= total / 5;
    cout << avg;
    return 0;
}