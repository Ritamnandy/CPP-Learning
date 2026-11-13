
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool containsDuplicate(vector<int> &arr)
{
    unordered_set<int> set;
    for (int i = 0; i < arr.size(); i++)
    {
        set.insert(arr[i]);
    }
    return set.size() == arr.size() ? false : true;
}

int main()
{
    vector<int> arr = {2, 3, 4, 5, 5, 10, 20, 22, 30};

    int res = containsDuplicate(arr);
    cout << boolalpha;
    cout << "Result: " << res << endl;

    return 0;
}