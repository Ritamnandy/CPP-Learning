
#include<iostream>

using namespace std;



int main(){

    int *arr = new int[5]{1,2, 3, 4, 5};
    int *a = new int (10);
    for (int i = 0; i < 5;i++)
    {
        cout << arr[i] << endl;
    }
    cout << "a value " << arr << endl;
    delete a;
    delete[]arr;
    return 0;
}