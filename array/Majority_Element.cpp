
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int majority_elements(vector<int> &arr)
{
    int candidate = -1, vote = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (vote == 0)
        {
            candidate = arr[i];
            vote = 1;
        }
        else
        {
            if (candidate == arr[i])
            {
                vote++;
            }
            else
            {
                vote--;
            }
        }
    }
    int count = 0;
    for (int i : arr)
    {
        if (i == candidate)
        {
            count++;
        }
    }
    return count > arr.size() / 2 ? candidate : -1;
}

int main()
{
    vector<int> arr = {21, 22, 10, 12, 11, 24, 25};
    int res = majority_elements(arr);
    cout << "\nMajority Element: " << res << endl;
    return 0;
}