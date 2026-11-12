
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {10, 20, 30};
    cout << boolalpha;
    // int n, ele;
    // cout << "Enter the size of an array: ";
    // cin >> n;

    // for (int i = 0; i < n; i++)
    // {
    //     cout << "Enter element: ";
    //     cin >> ele;
    //     arr.push_back(ele);
    // }

    arr.push_back(1);
    arr.push_back(10);
    arr.push_back(100);
    arr.push_back(700);
    cout << arr.size()<<"\n";
    cout << arr.empty()<<"\n";
    cout << arr.capacity()<<"\n";
    cout << arr.front()<<"\n";

    cout << endl;
    for (auto e : arr)
    {
        cout << e << " ";
    }

    return 0;
}