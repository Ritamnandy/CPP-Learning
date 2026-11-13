
#include <iostream>
#include <vector>
using namespace std;

int find_number(vector<int> &arr)
{
    int res = 0;
    for (int i = 0; i <= arr.size(); i++)
    {
        res ^= i;
        cout << res << endl;
    }
    cout << "After" << endl;

    for (int i : arr)
    {
        res ^= i;
        cout << res << endl;
    }
    return res;
}

int main()
{
    vector<int> arr = {3, 0, 1, 5,2};
    int res = find_number(arr);
    cout << "\nMissing element: " << res << endl;
    return 0;
}