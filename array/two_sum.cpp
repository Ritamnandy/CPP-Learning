
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int> &arr, int target)
{
    unordered_map<int, int> map;
    for (int i = 0; i < arr.size(); i++)
    {
        int res = target - arr[i];
        if (map.count(res))
        {
            return {map[res], i};
        }
        map[arr[i]] = i;
    }
    return {};
}

int main()
{
    vector<int> arr = {2, 3, 4, 5, 10, 20, 22, 30};
    int target = 24;
    vector<int> result = twoSum(arr, target);
    cout << "Result: ";
    for (int a : result)
    {
        cout << a << " ";
    }
    cout << endl;

    return 0;
}